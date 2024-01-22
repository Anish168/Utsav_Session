let slideNum = 0;

function controller(x) {
    slideNum = slideNum + x;
    slideShow(slideNum);
}
slideShow(slideNum);
function slideShow(num) {
    let slides = document.getElementsByClassName("slide");
    // console.log(slides)
    if (num == slides.length) {
        slideNum = 0;
        num = 0;
    }
    if (num < 0) {
        slideNum = slides.length - 1;
        num = slides.length - 1;
    }
    for (var prop of slides) {
        prop.style.display = "none";
    }
    slides[num].style.display = "block";
}