$(document).ready(function() {
 
    var imageHeight, wrapperHeight, overlap, container = $('.image-wrap');  
 
    function centerImage() {
        imageHeight = container.find('img').height();
        wrapperHeight = container.height();
        overlap = (wrapperHeight - imageHeight) / 2;
        container.find('img').css('margin-top', overlap);
    }
     
    $(window).on("load resize", centerImage);
     
    var el = document.getElementById('homeslider');
    if (el.addEventListener) {  
        el.addEventListener("webkitTransitionEnd", centerImage, false); // Webkit event
        el.addEventListener("transitionend", centerImage, false); // FF event
        el.addEventListener("oTransitionEnd", centerImage, false); // Opera event
    }
 
});