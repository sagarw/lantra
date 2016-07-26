var replaceTokens = function() {
	var replacements = {
			"integricon":"path1",
			"trainicon":"path2",
			"qualicon":"path3"
		},
		replaceIn = document.getElementsByClassName("facetapi-facet-field-course-typefield-facet-display"),
        regEx;
    
    for(var i = 0, l = replaceIn.length; i < l; i++) {
        for(var token in replacements) {
            regEx = new RegExp(">" + token, "g");
            replaceIn[i].innerHTML = replaceIn[i].innerHTML.replace(regEx, "><img src=\"" + replacements[token] + "\" alt=\"\">");
	    }
    }
};
