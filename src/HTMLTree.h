#include <vector>
#include <string>

/*Parent class of all html tags*/
class HTMLTree {
public:
    std::string name;
    std::string htmlClass;
    std::string accessKey;
    std::string contentEditable;
    std::string dir;
    std::string draggable;
    std::string enterKeyHint;
    std::string hidden;
    std::string id;
    std::string inert;
    std::string Inputmode;
    std::string lang;
    std::string popover;
    std::string spellcheck;
    std::string style;
    std::string tabindex;
    std::string title;
    std::string translate;

    HTMLTree* parent;

    /*Adds child to children*/
    void addChild(HTMLTree* child);

    std::vector<HTMLTree*> children;
};

/*Container class for the <html> tag*/
class htmlTag : public HTMLTree{
public:
    std::string xmlns;
};

class aTag : public HTMLTree{
public:
    std::string download;
    std::string href;
    std::string hreflang;
    std::string media;
    std::string ping;
    std::string referrerpolicy;
    std::string rel;
    std::string target;
    std::string type;
};

class abbrTag : public HTMLTree{

};

class addressTag : public HTMLTree{

};

class areaTag : public HTMLTree {
public:
    std::string alt;
    std::string coords;
    std::string download;
    std::string href;
    std::string hreflang;
    std::string media;
    std::string referrerpolicy;
    std::string rel;
    std::string shape;
    std::string target;
    std::string type;
};

class articleTag : public HTMLTree {

};

class asideTag : public HTMLTree {

};

class audioTag : public HTMLTree {
public:
    std::string autoplay;
    std::string controls;
    std::string loop;
    std::string muted;
    std::string preload;
    std::string src;
};

class bTag : public HTMLTree {
public:

};

class baseTag : public HTMLTree {
public:
    std::string href;
    std::string target;
};

class bdiTag : public HTMLTree {

};

class bdoTag : public HTMLTree {
public:
    std::string dir;
};

class blockquoteTag : public HTMLTree {
public:
    std::string cite;
};

class bodyTag : public HTMLTree {

};

class brTag : public HTMLTree {

};

class buttonTag : public HTMLTree {
public:
    std::string autofocus;
    std::string disabled;
    std::string form;
    std::string formaction;
    std::string formenctype;
    std::string formmethod;
    std::string formnovalidate;
    std::string formtarget;
    std::string name;
    std::string type;
    std::string value;
};

class canvasTag : public HTMLTree {
public:
    std::string height;
    std::string width;
};

class captionTag : public HTMLTree {

};

class citeTag : public HTMLTree {

};

class codeTag : public HTMLTree {

};

class colTag : public HTMLTree {
public:
    std::string span;
};

class colgroupTag : public HTMLTree {
public:
    std::string span;
};

class dataTag : public HTMLTree {
public:
    std::string value;
};

class datalistTag : public HTMLTree {

};

class ddTag : public HTMLTree {

};

class delTag : public HTMLTree {
public:
    std::string cite;
    std::string datetime;
};

class detailsTag : public HTMLTree {
public:
    std::string open;
};

class dfnTag : public HTMLTree {

};
class dialogTag : public HTMLTree {
public:
    std::string open;
};
class divTag : public HTMLTree {

};
class dlTag : public HTMLTree {

};
class dtTag : public HTMLTree {

};
class emTag : public HTMLTree {

};
class embedTag : public HTMLTree {
public:
    std::string height;
    std::string src;
    std::string type;
    std::string width;
};
class fieldsetTag : public HTMLTree {
public:
    std::string disabled;
    std::string form;
    std::string name;

};
class figcaptionTag : public HTMLTree {

};
class figureTag : public HTMLTree {

};

class footerTag : public HTMLTree {

};
class formTag : public HTMLTree {
public:
    std::string accept_charset;
    std::string action;
    std::string autocomplete;
    std::string enctype;
    std::string method;
    std::string name;
    std::string novalidate;
    std::string rel;
    std::string target;
};
class hTag : public HTMLTree {

};
class headTag : public HTMLTree {

};
class headerTag : public HTMLTree {

};
class hrTag : public HTMLTree {

};
class iTag : public HTMLTree {

};

class iframeTag : public HTMLTree {
public:
    std::string allow;
    std::string allowfullscreen;
    std::string allowpaymentrequest;
    std::string height;
    std::string name;
    std::string referrerpolicy;
    std::string sandbox;
    std::string src;
    std::string srcdoc;
    std::string width;

};

class imgTag : public HTMLTree {
public:
    std::string alt;
    std::string crossorigin;
    std::string height;
    std::string ismap;
    std::string loading;
    std::string longdesc;
    std::string referrerpolicy;
    std::string sizes;
    std::string src;
    std::string srcset;
    std::string usemap;
    std::string width;
};

class inputTag : public HTMLTree {
public:
    std::string accept;
    std::string alt;
    std::string autocomplete;
    std::string autofocus;
    std::string checked;
    std::string dirname;
    std::string disabled;
    std::string form;
    std::string formaction;
    std::string formenctype;
    std::string formmethod;
    std::string formnovalidate;
    std::string formtarget;
    std::string height;
    std::string list;
    std::string max;
    std::string maxlength;
    std::string min;
    std::string minlength;
    std::string span;
    std::string multiple;
    std::string name;
    std::string pattern;
    std::string placeholder;
    std::string readonly;
    std::string required;
    std::string size;
    std::string src;
    std::string step;
    std::string type;
    std::string value;
    std::string width;
};

class insTag : public HTMLTree {
public:
    std::string cite;
    std::string datetime;
};

class kbdTag : public HTMLTree {

};

class labelTag : public HTMLTree {
public:
    std::string forAttribute;
    std::string form;
};

class legendTag : public HTMLTree {

};

class liTag : public HTMLTree {
public:
    std::string value;
};

class linkTag : public HTMLTree {
public:
    std::string crossorigin;
    std::string href;
    std::string hreflang;
    std::string media;
    std::string referrerpolicy;
    std::string rel;
    std::string sizes;
    std::string title;
    std::string type;

};

class mainTag : public HTMLTree {

};

class mapTag : public HTMLTree {
public:
    std::string name;
};

class markTag : public HTMLTree {

};

class metaTag : public HTMLTree {
public:
    std::string charset;
    std::string content;
    std::string http_equiv;
    std::string name;

};

class meterTag : public HTMLTree {
public:
    std::string form;
    std::string high;
    std::string low;
    std::string max;
    std::string min;
    std::string optimum;
    std::string value;
};
class navTag : public HTMLTree {

};

class noscriptTag : public HTMLTree {

};

class objectTag : public HTMLTree {
public:
    std::string data;
    std::string form;
    std::string height;
    std::string name;
    std::string type;
    std::string usemap;
    std::string width;
};

class olTag : public HTMLTree {
public:
    std::string reversed;
    std::string start;
    std::string type;
};

class optgroupTag : public HTMLTree {
public:
    std::string disabled;
    std::string label;
};

class optionTag : public HTMLTree {
public:
    std::string disabled;
    std::string label;
    std::string selected;
    std::string value;
};

class outputTag : public HTMLTree {
public:
    std::string forAttribute;
    std::string form;
    std::string name;
};

class pTag : public HTMLTree {

};

class paramTag : public HTMLTree {
public:
    std::string name;
    std::string value;
};

class pictureTag : public HTMLTree {

};

class preTag : public HTMLTree {

};

class progressTag : public HTMLTree {
public:
    std::string max;
    std::string value;
};

class qTag : public HTMLTree {
public:
    std::string cite;
};

class rpTag : public HTMLTree {

};

class rtTag : public HTMLTree {

};

class rubyTag : public HTMLTree {

};

class sTag : public HTMLTree {

};

class sampTag : public HTMLTree {

};

class scriptTag : public HTMLTree {
public:
    std::string async;
    std::string crossorigin;
    std::string defer;
    std::string integrity;
    std::string nomodule;
    std::string referrerpolicy;
    std::string src;
    std::string type;
};

class sectionTag : public HTMLTree {

};

class selectTag : public HTMLTree {
public:
    std::string autofocus;
    std::string disabled;
    std::string form;
    std::string multiple;
    std::string name;
    std::string required;
    std::string size;
};

class slotTag : public HTMLTree {

};

class smallTag : public HTMLTree {

};

class sourceTag : public HTMLTree {
public:
    std::string media;
    std::string sizes;
    std::string src;
    std::string srcset;
    std::string type;
};

class spanTag : public HTMLTree {

};

class strongTag : public HTMLTree {

};

class styleTag : public HTMLTree {
public:
    std::string media;
    std::string type;
};

class subTag : public HTMLTree {

};
class summaryTag : public HTMLTree {

};
class supTag : public HTMLTree {

};
class svgTag : public HTMLTree {

};
class tableTag : public HTMLTree {

};
class tbodyTag : public HTMLTree {

};
class tdTag : public HTMLTree {
public:
    std::string colspan;
    std::string headers;
    std::string rowspan;
};
class templateTag : public HTMLTree {

};
class textareaTag : public HTMLTree {
public:
    std::string autocomplete;
    std::string autofocus;
    std::string cols;
    std::string dirname;
    std::string disabled;
    std::string form;
    std::string maxlength;
    std::string minlength;
    std::string name;
    std::string placeholder;
    std::string readonly;
    std::string required;
    std::string rows;
    std::string spellcheck;
    std::string wrap;
};
class tfootTag : public HTMLTree {

};

class thTag : public HTMLTree {
public:
    std::string abbr;
    std::string colspan;
    std::string headers;
    std::string rowspan;
    std::string scope;
};
class theadTag : public HTMLTree {

};
class timeTag : public HTMLTree {
public:
    std::string datetime;
};
class titleTag : public HTMLTree {

};
class trTag : public HTMLTree {

};
class trackTag : public HTMLTree {
public:
    std::string defaultAttribute;
    std::string kind;
    std::string label;
    std::string src;
    std::string srclang;

};
class uTag : public HTMLTree {

};

class ulTag : public HTMLTree {

};
class varTag : public HTMLTree {

};
class videoTag : public HTMLTree {
public:
    std::string autoplay;
    std::string controls;
    std::string height;
    std::string loop;
    std::string muted;
    std::string poster;
    std::string preload;
    std::string src;
    std::string width;
};
class wbrTag : public HTMLTree {

};