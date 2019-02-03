window.addEventListener("load", function(){
    return new QWebChannel(qt.webChannelTransport, function(channel){
        // Purely for debug
        window.XXX = channel.objects;

        // Display library information
        var disp = channel.objects.Root;
        var iNode = document.getElementById("info");
        var list = ["NAME", "VENDOR", "VERSION", "REVISION", "CHANGESET", "BUILD", "LINK", "QT", "PLUGIN_NAME", "PLUGIN_VERSION", "PLUGIN_REVISION"];

        list.forEach(function(i){
            var line = document.createElement("div");
            line.appendChild(document.createTextNode(i + ": " + disp[i]));
            iNode.appendChild(line)
        });
    });
});
