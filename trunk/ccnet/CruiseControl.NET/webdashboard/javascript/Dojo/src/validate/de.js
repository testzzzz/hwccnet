
dojo.provide("dojo.validate.de");dojo.require("dojo.validate.common");dojo.validate.isGermanCurrency=function(value){var flags={symbol:"\u20ac",placement:"after",signPlacement:"begin",decimal:",",separator:"."};return dojo.validate.isCurrency(value,flags);};