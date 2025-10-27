#ifndef VISUALENUMSMAP_H
#define VISUALENUMSMAP_H

#include "definitions.h"

#include <QObject>

namespace Style
{

struct VisualEnum
{
    int value;
    QString name;
};

class VisualEnumsMap
{
public:
    inline static const QList<VisualEnum> ENUM_BGTYPE
    {
        VisualEnum{0, "IMAGEFILE" },
        VisualEnum{1, "BORDERFILL" },
        VisualEnum{2, "NONE" }
    };

    inline static const QList<VisualEnum> ENUM_IMAGELAYOUT
    {
        VisualEnum{0, "VERTICAL" },
        VisualEnum{1, "HORIZONTAL" }
    };

    inline static const QList<VisualEnum> ENUM_BORDERTYPE
    {
        VisualEnum{0, "RECT" },
        VisualEnum{1, "ROUNDRECT" },
        VisualEnum{2, "ELLIPSE" }
    };

    inline static const QList<VisualEnum> ENUM_FILLTYPE
    {
        VisualEnum{0, "SOLID" },
        VisualEnum{1, "VERTGRADIENT" },
        VisualEnum{2, "HORIZONTALGRADIENT" },
        VisualEnum{3, "RADIALGRADIENT" },
        VisualEnum{4, "TILEIMAGE" }
    };

    inline static const QList<VisualEnum> ENUM_SIZINGTYPE
    {
        VisualEnum{0, "TRUESIZE" },
        VisualEnum{1, "STRETCH" },
        VisualEnum{2, "TILE" }
    };

    inline static const QList<VisualEnum> ENUM_ALIGNMENT_H
    {
        VisualEnum{0, "LEFT" },
        VisualEnum{1, "CENTER" },
        VisualEnum{2, "RIGHT" }
    };

    inline static const QList<VisualEnum> ENUM_ALIGNMENT_V
    {
        VisualEnum{0, "TOP" },
        VisualEnum{1, "CENTER" },
        VisualEnum{2, "BOTTOM" }
    };

    inline static const QList<VisualEnum> ENUM_OFFSET
    {
        VisualEnum{0, "TOPLEFT" },
        VisualEnum{1, "TOPRIGHT" },
        VisualEnum{2, "TOPMIDDLE" },
        VisualEnum{3, "BOTTOMLEFT" },
        VisualEnum{4, "BOTTOMRIGHT" },
        VisualEnum{5, "BOTTOMMIDDLE" },
        VisualEnum{6, "MIDDLERIGHT" },
        VisualEnum{7, "LEFTOFCAPTION" },
        VisualEnum{8, "RIGHTOFCAPTION" },
        VisualEnum{9, "LEFTOFLASTBUTTON" },
        VisualEnum{10, "RIGHTOFLASTBUTTON" },
        VisualEnum{11, "ABOVELASTBUTTON" },
        VisualEnum{12, "BELOWLASTBUTTON" }
    };

    inline static const QList<VisualEnum> ENUM_ICONEFFECT
    {
        VisualEnum{0, "NONE" },
        VisualEnum{1, "GLOW" },
        VisualEnum{2, "SHADOW" },
        VisualEnum{3, "PULSE" },
        VisualEnum{4, "ALPHA" }
    };

    inline static const QList<VisualEnum> ENUM_TEXTSHADOW
    {
        VisualEnum{0, "NONE" },
        VisualEnum{1, "SINGLE" },
        VisualEnum{2, "CONTINUOUS" }
    };

    inline static const QList<VisualEnum> ENUM_GLYPHTYPE
    {
        VisualEnum{0, "NONE" },
        VisualEnum{1, "IMAGEGLYPH" },
        VisualEnum{2, "FONTGLYPH" }
    };

    inline static const QList<VisualEnum> ENUM_IMAGESELECT
    {
        VisualEnum{0, "NONE" },
        VisualEnum{1, "SIZE" },
        VisualEnum{2, "DPI" }
    };

    inline static const QList<VisualEnum> ENUM_TRUESIZESCALING
    {
        VisualEnum{0, "NONE" },
        VisualEnum{1, "SIZE" },
        VisualEnum{2, "DPI" }
    };

    inline static const QList<VisualEnum> ENUM_GLYPHFONTSCALING
    {
        VisualEnum{0, "NONE" },
        VisualEnum{1, "SIZE" },
        VisualEnum{2, "DPI" }
    };

    inline static const QList<VisualEnum> ENUM_HIGHCONTRASTTYPE
    {
        VisualEnum{0, "ACTIVECAPTION" },
        VisualEnum{1, "CAPTIONTEXT" },
        VisualEnum{2, "BTNFACE" },
        VisualEnum{3, "BTNTEXT" },
        VisualEnum{4, "DESKTOP" },
        VisualEnum{5, "GRAYTEXT" },
        VisualEnum{6, "HOTLIGHT" },
        VisualEnum{7, "INACTIVECAPTION" },
        VisualEnum{8, "INACTIVECAPTIONTEXT" },
        VisualEnum{9, "HIGHLIGHT" },
        VisualEnum{10, "HIGHLIGHTTEXT" },
        VisualEnum{11, "WINDOW" },
        VisualEnum{12, "WINDOWTEXT" }
    };

    inline static QList<VisualEnum> find(qint32 nameID)
    {
        if (nameID == static_cast<qint32>(IDENTIFIER::BGTYPE))
        {
            return VisualEnumsMap::ENUM_BGTYPE;
        }
        else if (nameID == static_cast<qint32>(IDENTIFIER::BORDERTYPE))
        {
            return VisualEnumsMap::ENUM_BORDERTYPE;
        }
        else if (nameID == static_cast<qint32>(IDENTIFIER::FILLTYPE))
        {
            return VisualEnumsMap::ENUM_FILLTYPE;
        }
        else if (nameID == static_cast<qint32>(IDENTIFIER::SIZINGTYPE))
        {
            return VisualEnumsMap::ENUM_SIZINGTYPE;
        }
        else if (nameID == static_cast<qint32>(IDENTIFIER::HALIGN))
        {
            return VisualEnumsMap::ENUM_ALIGNMENT_H;
        }
        else if (nameID == static_cast<qint32>(IDENTIFIER::CONTENTALIGNMENT))
        {
            return VisualEnumsMap::ENUM_ALIGNMENT_H;
        }
        else if (nameID == static_cast<qint32>(IDENTIFIER::VALIGN))
        {
            return VisualEnumsMap::ENUM_ALIGNMENT_V;
        }
        else if (nameID == static_cast<qint32>(IDENTIFIER::OFFSETTYPE))
        {
            return VisualEnumsMap::ENUM_OFFSET;
        }
        else if (nameID == static_cast<qint32>(IDENTIFIER::ICONEFFECT))
        {
            return VisualEnumsMap::ENUM_ICONEFFECT;
        }
        else if(nameID == static_cast<qint32>(IDENTIFIER::TEXTSHADOWTYPE))
        {
            return VisualEnumsMap::ENUM_TEXTSHADOW;
        }
        else if (nameID == static_cast<qint32>(IDENTIFIER::IMAGELAYOUT))
        {
            return VisualEnumsMap::ENUM_IMAGELAYOUT;
        }
        else if (nameID == static_cast<qint32>(IDENTIFIER::GLYPHTYPE))
        {
            return VisualEnumsMap::ENUM_GLYPHTYPE;
        }
        else if (nameID == static_cast<qint32>(IDENTIFIER::IMAGESELECTTYPE))
        {
            return VisualEnumsMap::ENUM_IMAGESELECT;
        }
        else if (nameID == static_cast<qint32>(IDENTIFIER::GLYPHFONTSIZINGTYPE))
        {
            return VisualEnumsMap::ENUM_GLYPHFONTSCALING;
        }
        else if (nameID == static_cast<qint32>(IDENTIFIER::TRUESIZESCALINGTYPE))
        {
            return VisualEnumsMap::ENUM_TRUESIZESCALING;
        }
        else if (nameID >= static_cast<qint32>(IDENTIFIER::UNKNOWN_5110_HC) &&
                 nameID <= static_cast<qint32>(IDENTIFIER::UNKNOWN_5122_HC))
        {
            return VisualEnumsMap::ENUM_HIGHCONTRASTTYPE;
        }
        else
        {
            return QList<VisualEnum>();
        }
    }
};

}

#endif // VISUALENUMSMAP_H
