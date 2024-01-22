var num = 1;
// num=[0 1 2] length=3
function changingSlide(a) {
    num = num + a;
    slideShow(num);
}

slideShow(num);
function slideShow(slideNo) {
    var slides = document.getElementsByClassName("slide");
    for (var prop of slides) {
        prop.style.display = "none";
    }
    if (slideNo == slides.length) {
        num = 0;
        slideNo = 0;
    }
    else if (slideNo < 0) {
        num = slides.length - 1
        slideNo = slides.length - 1
    }
    slides[slideNo].style.display = "block";
}

