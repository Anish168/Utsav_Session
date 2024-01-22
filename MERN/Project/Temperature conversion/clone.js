var cel = document.getElementById("celcius");
var fah = document.getElementById("fahren");

cel.addEventListener('input', function () {
    var c = this.value;
    var f = (c * 9 / 5) + 32;
    if (!Number.isInteger(f)) {
        f = f.toFixed(3);
    }
    fah.value = f;
});
fah.addEventListener('input', function () {
    var f = this.value;
    var c = (f - 32) * 5 / 9;
    if (!Number.isInteger(c)) {
        c = c.toFixed(3);
    }
    cel.value = c;
});

