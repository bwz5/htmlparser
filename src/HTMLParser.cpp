#include "HTMLParser.h"
#include <fstream>
#include <iostream>
#include <sstream>

void HTMLParser::createHTMLString(std::string fileName) {
    std::ifstream htmlTextFile(fileName, std::ios::in);

    if (htmlTextFile.is_open()){
        std::string line;

        while(std::getline(htmlTextFile,line)){
            std::string token;
            std::stringstream ss(token);

            while (getline(ss, token, ' ')) {
                HTMLString.push_back(token);
            }
        }
    }
    if (HTMLString.empty()){
        std::cout << "The returned HTML String was empty." << std::endl;
    } else {
        std::cout << "The HTML String has been made" << std::endl;
    }
}

void HTMLParser::parseHTMLString() { //TODO: Either split with '=' to get attributes or use < to get starting tag and </ to get end
    HTMLTree* current = root;

    for (auto token : HTMLString){
        if (token.size() >= 2){
            if (token[0] == '<' && token[1] != '/'){ // Goes back to the parent
                std::string tokenTag = "";

                HTMLTree* child;
                for (int i = 2; i < token.size()-1; i++){
                    tokenTag += token[i];
                }
                switch(htmlMap[tokenTag]){
                    case a:
                        child = new aTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case html:
                        child = new htmlTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case abbr:
                        child = new abbrTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case address:
                        child = new addressTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case area:
                        child = new areaTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case article:
                        child = new articleTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case aside:
                        child = new asideTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case audio:
                        child = new audioTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case b:
                        child = new bTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case bdi:
                        child = new bdiTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case bdo:
                        child = new bdoTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case blockquote:
                        child = new blockquoteTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case body:
                        child = new bodyTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case br:
                        child = new brTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case button:
                        child = new buttonTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case canvas:
                        child = new canvasTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case caption:
                        child = new captionTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case cite:
                        child = new citeTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case code:
                        child = new codeTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case col:
                        child = new colTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case colgroup:
                        child = new colgroupTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case data:
                        child = new dataTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case datalist:
                        child = new datalistTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case dd:
                        child = new ddTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case del:
                        child = new delTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case details:
                        child = new detailsTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case dfn:
                        child = new dfnTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case dialog:
                        child = new dialogTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case div:
                        child = new divTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case dl:
                        child = new dlTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case dt:
                        child = new dtTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case em:
                        child = new emTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case embed:
                        child = new embedTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case fieldset:
                        child = new fieldsetTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case figcaption:
                        child = new figcaptionTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case figure:
                        child = new figureTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case footer:
                        child = new footerTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case form:
                        child = new formTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case h:
                        child = new hTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case head:
                        child = new headTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case header:
                        child = new headerTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case  hr:
                        child = new hrTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case  i:
                        child = new iTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case iframe:
                        child = new iframeTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case img:
                        child = new imgTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case input:
                        child = new inputTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case ins:
                        child = new insTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case kbd:
                        child = new kbdTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case label:
                        child = new labelTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case legend:
                        child = new legendTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case li:
                        child = new liTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case link:
                        child = new linkTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case main:
                        child = new mainTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case map:
                        child = new mapTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case mark:
                        child = new markTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case meta:
                        child = new metaTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case meter:
                        child = new meterTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case nav:
                        child = new navTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case noscript:
                        child = new noscriptTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case object:
                        child = new objectTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case ol:
                        child = new olTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case optgroup:
                        child = new optgroupTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case option:
                        child = new optionTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case output:
                        child = new outputTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case p:
                        child = new pTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case param:
                        child = new paramTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case picture:
                        child = new pictureTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case pre:
                        child = new preTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case progress:
                        child = new progressTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case q:
                        child = new qTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case rp:
                        child = new rpTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case rt:
                        child = new rtTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case ruby:
                        child = new rubyTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case s:
                        child = new sTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case samp:
                        child = new sampTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case script:
                        child = new scriptTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case section:
                        child = new sectionTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case slot:
                        child = new slotTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case small:
                        child = new smallTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case source:
                        child = new sourceTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case span:
                        child = new spanTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case strong:
                        child = new strongTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case style:
                        child = new styleTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case sub:
                        child = new subTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case summary:
                        child = new summaryTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case sup:
                        child = new supTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case svg:
                        child = new svgTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case table:
                        child = new tableTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case tbody:
                        child = new tbodyTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case td:
                        child = new tdTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case templateTag:
                        child = new class templateTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case textarea:
                        child = new textareaTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case tfoot:
                        child = new tfootTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case th:
                        child = new thTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case thead:
                        child = new theadTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case timeTag:
                        child = new class timeTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case title:
                        child = new titleTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case tr:
                        child = new trTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case track:
                        child = new trackTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case u:
                        child = new uTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case ul:
                        child = new ulTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case var:
                        child = new varTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case video:
                        child = new videoTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                    case wbr:
                        child = new wbrTag();
                        child->parent = current;

                        current->addChild(child);
                        current = child;
                }

            }
            else if (token[0] == '<' && token[1] == '/'){ // Goes back to the parent
                current = current->parent;
            }
        }
    }
}

HTMLParser::HTMLParser() {
    root->parent = nullptr;

    htmlMap["a"] = a; // TODO: Finish this
    htmlMap["html"] = html;
    htmlMap["abbr"] = abbr;
    htmlMap["address"] = address;
    htmlMap["area"] = area;
    htmlMap["article"] = article;
    htmlMap["aside"] = aside;
    htmlMap["audio"] = audio;
    htmlMap["b"] = b;
    htmlMap["bdi"] = bdi;
    htmlMap["bdo"] = bdo;
    htmlMap["blockquote"] = blockquote;
    htmlMap["body"] = body;
    htmlMap["br"] = br;
    htmlMap["button"] = button;
    htmlMap["canvas"] = canvas;
    htmlMap["caption"] = caption;
    htmlMap["cite"] = cite;
    htmlMap["code"] = code;
    htmlMap["col"] = col;
    htmlMap["colgroup"] = colgroup;
    htmlMap["data"] = data;
    htmlMap["datalist"] = datalist;
    htmlMap["dd"] = dd;
    htmlMap["del"] = del;
    htmlMap["details"] = details;
    htmlMap["dfn"] = dfn;
    htmlMap["dialog"] = dialog;
    htmlMap["div"] = div;
    htmlMap["dl"] = dl;
    htmlMap["dt"] = dt;
    htmlMap["em"] = em;
    htmlMap["embed"] = embed;
    htmlMap["fieldset"] = fieldset;
    htmlMap["figcaption"] = figcaption;
    htmlMap["figure"] = figure;
    htmlMap["footer"] = footer;
    htmlMap["form"] = form;
    htmlMap["h"] = h;
    htmlMap["head"] = head;
    htmlMap["header"] = header;
    htmlMap["hr"] = hr;
    htmlMap["i"] = i;
    htmlMap["iframe"] = iframe;
    htmlMap["img"] = img;
    htmlMap["input"] = input;
    htmlMap["ins"] = ins;
    htmlMap["kbd"] = kbd;
    htmlMap["label"] = label;
    htmlMap["legend"] = legend;
    htmlMap["li"] = li;
    htmlMap["link"] = link ;
    htmlMap["main"] = main;
    htmlMap["map"] = map;
    htmlMap["mark"] = mark;
    htmlMap["meta"] = meta;
    htmlMap["meter"] = meter;
    htmlMap["nav"] = nav;
    htmlMap["noscript"] = noscript;
    htmlMap["object"] = object;
    htmlMap["ol"] = ol;
    htmlMap["optgroup"] = optgroup;
    htmlMap["option"] = option;
    htmlMap["output"] = output;
    htmlMap["p"] = p;
    htmlMap["param"] = param;
    htmlMap["picture"] = picture;
    htmlMap["pre"] = pre;
    htmlMap["progress"] = progress;
    htmlMap["q"] =  q;
    htmlMap["rp"] = rp;
    htmlMap["rt"] = rt;
    htmlMap["ruby"] = ruby;
    htmlMap["s"] = s;
    htmlMap["samp"] = samp;
    htmlMap["script"] = script;
    htmlMap["section"] = section;
    htmlMap["slot"] = slot;
    htmlMap["small"] = small;
    htmlMap["source"] = source;
    htmlMap["span"] = span;
    htmlMap["strong"] = strong;
    htmlMap["style"] = style;
    htmlMap["sub"] = sub;
    htmlMap["summary"] = summary;
    htmlMap["sup"] = sup;
    htmlMap["svg"] = svg;
    htmlMap["table"] = table;
    htmlMap["tbody"] = tbody;
    htmlMap["td"] = td;
    htmlMap["templateTag"] = templateTag;
    htmlMap["textarea"] = textarea;
    htmlMap["tfoot"] = tfoot;
    htmlMap["th"] = th;
    htmlMap["thead"] = thead;
    htmlMap["timeTag"] = timeTag;
    htmlMap["title"] = title;
    htmlMap["tr"] = tr;
    htmlMap["trac"] = track;
    htmlMap["u"] = u;
    htmlMap["ul"] = ul;
    htmlMap["var"] = var;
    htmlMap["video"] = video;
    htmlMap["wbr"] = wbr;
}

HTMLParser::~HTMLParser() = default;