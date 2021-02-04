function upDate(previewPic){
    var imgRef = previewPic.src;
    var imgCaption = previewPic.alt;
    document.getElementById('image').style.backgroundImage = 'url('+imgRef+')';
    document.getElementById('image').style.backgroundColor = '#f3f3f3';
    document.getElementById('image').innerHTML = imgCaption;
}

function unDo(){
    var defaultUrl = '';
    var defImgCaption = 'Hover over an image below to display here.';
    document.getElementById('image').style.backgroundImage = 'url('+defaultUrl+')';
    document.getElementById('image').style.backgroundColor = '#8e68ff';
    document.getElementById('image').innerHTML = defImgCaption;
}