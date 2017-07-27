/**
 * Created by YiJiangFengYun on 2017/7/6.
 * Syntax Type
 */

let Base = require("./base");
let docVersion = require("./documentVersion");

let Syntax = function (name, option) {
    Base.call(this, name, option);

    this.version = option.version === docVersion.VERSION_2 ? "proto2" : "proto3";
};

Syntax.prototype = Object.create(Base.prototype);
Syntax.prototype.constructor = Syntax;

Syntax.prototype.toText = function (option) {
    return "syntax = \"" + this.version + "\";";
};

module.exports = Syntax;