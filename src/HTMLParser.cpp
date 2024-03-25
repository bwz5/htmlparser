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
                for (int i = 2; i < token.size()-1; i++){
                    tokenTag += token[i];
                }
                switch(htmlMap[tokenTag]){
                    case a:
                        std::cout << "saw an a tag \n";
                    case html: 
                    case abbr: 
                    case address: 
                    case area: 
                    case article: 
                    case aside: 
                    case audio: 
                    case b: 
                    case bdi: 
                    case bdo: 
                    case blockquote: 
                    case body: 
                    case br: 
                    case button: 
                    case canvas: 
                    case caption: 
                    case cite: 
                    case code: 
                    case col: 
                    case colgroup: 
                    case data: 
                    case datalist: 
                    case dd: 
                    case del: 
                    case details: 
                    case dfn: 
                    case dialog: 
                    case div: 
                    case dl: 
                    case dt: 
                    case em: 
                    case embed: 
                    case fieldset: 
                    case figcaption: 
                    case figure: 
                    case footer: 
                    case form: 
                    case h: 
                    case head: 
                    case header: 
                    case  hr: 
                    case  i: 
                    case iframe: 
                    case img: 
                    case input: 
                    case ins: 
                    case kbd: 
                    case label: 
                    case legend: 
                    case li: 
                    case link: 
                    case main: 
                    case map: 
                    case mark: 
                    case meta: 
                    case meter: 
                    case nav: 
                    case noscript: 
                    case object: 
                    case ol: 
                    case optgroup: 
                    case option: 
                    case output: 
                    case p: 
                    case param: 
                    case picture: 
                    case pre: 
                    case progress: 
                    case q: 
                    case rp: 
                    case rt: 
                    case ruby: 
                    case s: 
                    case samp: 
                    case script: 
                    case section: 
                    case slot: 
                    case small: 
                    case source: 
                    case span: 
                    case strong: 
                    case style: 
                    case sub: 
                    case summary: 
                    case sup: 
                    case svg: 
                    case table: 
                    case tbody: 
                    case td:
                    case templateTag:
                    case textarea:
                    case tfoot:
                    case th:
                    case thead:
                    case timeTag:
                    case title:
                    case tr:
                    case track:
                    case u:
                    case ul:
                    case var:
                    case video:
                    case wbr: 
                    default:
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