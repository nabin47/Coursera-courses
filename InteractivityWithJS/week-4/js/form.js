function billingFunction(){
    if(document.getElementById('same').checked){
        let name = document.getElementById('shippingName').value;
        let zip = document.getElementById('shippingZip').value;

        document.getElementById('billingName').setAttribute('value', name);
        document.getElementById('billingZip').setAttribute('value', zip);
    }

    else{
        document.getElementById('billingName').setAttribute('value', '');
        document.getElementById('billingZip').setAttribute('value', '');
    }
}