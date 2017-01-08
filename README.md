# FuseShareSheet

Share sheet for FuseTools Works on Android and IOS.

# Setup:

1- Take the Share.uno file and put it beside the .unoproj file.
2- In your JavaScript file:

    var Share = require("Share");

    function share() { Share.sendIntent(); }

    module.exports = {
      share: share
    };

3- In your UX file:

 <Button Clicked="{share}" Text="SHARE" />
 
4- For now it shares Text you will find what it shares in the Share.uno file you can change that.
