#include "HTMLTree.h"
#include <string>
#include <vector>
#include <map>

class HTMLParser {
private:
    HTMLTree* root;
    std::vector<std::string> HTMLString;

    enum HTMLTags {
        a,
        html,
        abbr,
        address,
        area,
        article,
        aside,
        audio,
        b,
        bdi,
        bdo,
        blockquote,
        body,
        br,
        button,
        canvas,
        caption,
        cite,
        code,
        col,
        colgroup,
        data,
        datalist,
        dd,
        del,
        details,
        dfn,
        dialog,
        div,
        dl,
        dt,
        em,
        embed,
        fieldset,
        figcaption,
        figure,
        footer,
        form,
        h,
        head,
        header,
        hr,
        i,
        iframe,
        img,
        input,
        ins,
        kbd,
        label,
        legend,
        li,
        link,
        main,
        map,
        mark,
        meta,
        meter,
        nav,
        noscript,
        object,
        ol,
        optgroup,
        option,
        output,
        p,
        param,
        picture,
        pre,
        progress,
        q,
        rp,
        rt,
        ruby,
        s,
        samp,
        script,
        section,
        slot,
        small,
        source,
        span,
        strong,
        style,
        sub,
        summary,
        sup,
        svg,
        table,
        tbody,
        td,
        templateTag,
        textarea,
        tfoot,
        th,
        thead,
        timeTag,
        title,
        tr,
        track,
        u,
        ul,
        var,
        video,
        wbr
    };

    std::map<std::string , HTMLTags> htmlMap;
public:

    HTMLParser();

    ~HTMLParser();

    void parseHTMLString();

    void createHTMLString(std::string fileName);
};