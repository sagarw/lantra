function form_select_options($element, $choices = NULL) {
  if (!isset($choices)) {
    $choices = $element ['#options'];
  }
  // array_key_exists() accommodates the rare event where $element['#value'] is NULL.
  // isset() fails in this situation.
  $value_valid = isset($element ['#value']) || array_key_exists('#value', $element);
  $value_is_array = $value_valid && is_array($element ['#value']);
  $options = '';
  foreach ($choices as $key => $choice) {
    if (is_array($choice)) {
      $options .= '<optgroup label="' . check_plain($key) . '">';
      $options .= form_select_options($element, $choice);
      $options .= '</optgroup>';
    }
    elseif (is_object($choice)) {
      $options .= form_select_options($element, $choice->option);
    }
    else {
      $key = (string) $key;
      if ($value_valid && (!$value_is_array && (string) $element ['#value'] === $key || ($value_is_array && in_array($key, $element ['#value'])))) {
        $selected = ' selected="selected"';
      }
      else {
        $selected = '';
      }
      $options .= '<option value="' . check_plain($key) . '"' . $selected . '>' . check_plain($choice) . '</option>';
    }
  }
  return $options;
}

