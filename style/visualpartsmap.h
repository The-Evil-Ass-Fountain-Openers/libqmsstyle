#ifndef VISUALPARTSMAP_H
#define VISUALPARTSMAP_H

#include "visualstatesmap.h"
#include "style.h"

#include <QObject>

#include <QList>

namespace Style
{

struct VisualPart
{
        int id;
        QString name;
        QList<VisualState> states;
};

class VisualPartsMap
{
public:
        inline static const QList<VisualPart> PARTS_ADDRESSBAND
        {
            VisualPart{0, "Common Properties", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{1, "BACKGROUND", VisualStatesMap::STATES_EDITTEXT_BG}, // reuse states
        };

        inline static const QList<VisualPart> PARTS_BARRIERPAGE
        {
            VisualPart{0, "Common Properties", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{1, "PANEBACKGROUND", VisualStatesMap::STATES_COMMON_DEFAULT},
        };

        inline static const QList<VisualPart> PARTS_BREADCRUMBBAR
        {
            VisualPart{0, "Common Properties", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{1, "OVERFLOWCHEVRON", VisualStatesMap::STATES_COMMON_DEFAULT},
        };

        inline static const QList<VisualPart> PARTS_BUTTON
        {
            VisualPart{0, "Common Properties", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{1, "PUSHBUTTON", VisualStatesMap::STATES_PUSHBUTTON},
            VisualPart{2, "RADIOBUTTON", VisualStatesMap::STATES_RADIOBUTTON},
            VisualPart{3, "CHECKBOX", VisualStatesMap::STATES_CHECKBOX},
            VisualPart{4, "GROUPBOX", VisualStatesMap::STATES_GROUPBOX},
            VisualPart{5, "USERBUTTON", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{6, "COMMANDLINK", VisualStatesMap::STATES_COMMANDLINK},
            VisualPart{7, "COMMANDLINKGLYPH", VisualStatesMap::STATES_COMMANDLINKGLYPHS},
            VisualPart{8, "RADIOBUTTON_LITE", VisualStatesMap::STATES_RADIOBUTTON},
            VisualPart{9, "CHECKBOX_LITE", VisualStatesMap::STATES_CHECKBOX},
            VisualPart{10, "GROUPBOX_LITE", VisualStatesMap::STATES_GROUPBOX},
            VisualPart{11, "PUSHBUTTONDROPDOWN", VisualStatesMap::STATES_PUSHBUTTONDROPDOWN},
        };

        inline static const QList<VisualPart> PARTS_CLOCK
        {
            VisualPart{0, "Common Properties", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{1, "TIME", VisualStatesMap::STATES_TIME},
        };

        inline static const QList<VisualPart> PARTS_CHARTVIEW
        {
            VisualPart{0, "Common Properties", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{1, "CPU_BACKGROUND", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{2, "CPU_BORDER", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{3, "CPU_GRID", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{4, "CPU_LINE1", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{5, "CPU_LINE1FILL", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{6, "CPU_LINE2", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{7, "CPU_LINE2FILL", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{8, "MEMORY_BACKGROUND", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{9, "MEMORY_BORDER", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{10, "MEMORY_GRID", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{11, "MEMORY_LINE1", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{12, "MEMORY_LINE1FILL", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{13, "MEMORY_LINE2", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{14, "MEMORY_LINE2FILL", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{15, "DISK_BACKGROUND", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{16, "DISK_BORDER", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{17, "DISK_GRID", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{18, "DISK_LINE1", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{19, "DISK_LINE1FILL", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{20, "DISK_LINE2", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{21, "DISK_LINE2FILL", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{22, "NETWORK_BACKGROUND", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{23, "NETWORK_BORDER", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{24, "NETWORK_GRID", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{25, "NETWORK_LINE1", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{26, "NETWORK_LINE1FILL", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{27, "NETWORK_LINE2", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{28, "NETWORK_LINE2FILL", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{29, "COPY_BORDER", VisualStatesMap::STATES_CHARTVIEW_LINE},
            VisualPart{30, "COPY_GRID", VisualStatesMap::STATES_CHARTVIEW_LINE},
            VisualPart{31, "COPY_LINE1", VisualStatesMap::STATES_CHARTVIEW_LINE},
            VisualPart{32, "COPY_LINE1FILL", VisualStatesMap::STATES_CHARTVIEW_LINE},
            VisualPart{33, "COPY_LINE2", VisualStatesMap::STATES_CHARTVIEW_LINE},
            VisualPart{34, "COPY_LINE2FILL", VisualStatesMap::STATES_CHARTVIEW_LINE},
            VisualPart{35, "CPU_SCALELINE", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{36, "CPU_SCALELINETEXT", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{37, "MEMORY_SCALELINE", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{38, "MEMORY_SCALELINETEXT", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{39, "DISK_SCALELINE", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{40, "DISK_SCALELINETEXT", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{41, "NETWORK_SCALELINE", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{42, "NETWORK_SCALELINETEXT", VisualStatesMap::STATES_COMMON_DEFAULT},
        };

        inline static const QList<VisualPart> PARTS_COMMANDMODULE_WINVista
        {
            VisualPart{0, "Common Properties", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{1, "MODULEBACKGROUND", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{2, "TASKBUTTON", VisualStatesMap::STATES_COMMANDMODULE_SPLITBUTTON},
            VisualPart{3, "SPLITBUTTONLEFT", VisualStatesMap::STATES_COMMANDMODULE_SPLITBUTTON},
            VisualPart{4, "SPLITBUTTONRIGHT", VisualStatesMap::STATES_COMMANDMODULE_SPLITBUTTON},
            VisualPart{5, "MENUGLYPH", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{6, "OVERFLOWGLYPH", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{7, "LIBRARYPANEMENUGLYPH", VisualStatesMap::STATES_COMMANDMODULE_LIBRARYPANE_GEN},
            VisualPart{8, "LIBRARYPANETOPVIEW", VisualStatesMap::STATES_COMMANDMODULE_LIBRARYPANE_GEN},
            VisualPart{9, "LIBRARYPANEIDENTIFIER", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{10, "LIBRARYPANEBACKGROUND", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{11, "LIBRARYPANEOVERLAY", VisualStatesMap::STATES_COMMON_DEFAULT},
        };

        inline static const QList<VisualPart> PARTS_COMMANDMODULE_WIN7
        {
            VisualPart{0, "Common Properties", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{1, "MODULEBACKGROUND", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{2, "MODULEBACKGROUNDCOLORS", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{3, "TASKBUTTON", VisualStatesMap::STATES_COMMANDMODULE_SPLITBUTTON},
            VisualPart{4, "SPLITBUTTONLEFT", VisualStatesMap::STATES_COMMANDMODULE_SPLITBUTTON},
            VisualPart{5, "SPLITBUTTONRIGHT", VisualStatesMap::STATES_COMMANDMODULE_SPLITBUTTON},
            VisualPart{6, "MENUGLYPH", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{7, "OVERFLOWGLYPH", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{8, "LIBRARYPANEMENUGLYPH", VisualStatesMap::STATES_COMMANDMODULE_LIBRARYPANE_GEN},
            VisualPart{9, "LIBRARYPANETOPVIEW", VisualStatesMap::STATES_COMMANDMODULE_LIBRARYPANE_GEN},
            VisualPart{10, "LIBRARYPANEIDENTIFIER", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{11, "LIBRARYPANEBACKGROUND", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{12, "LIBRARYPANEOVERLAY", VisualStatesMap::STATES_COMMON_DEFAULT},
        };

        inline static const QList<VisualPart> PARTS_COMMANDMODULE_WIN8
        {
            VisualPart{0, "Common Properties", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{1, "MODULEBACKGROUND", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{2, "MODULEBACKGROUNDCOLORS", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{3, "TASKBUTTON", VisualStatesMap::STATES_COMMANDMODULE_SPLITBUTTON},
            VisualPart{4, "SPLITBUTTONLEFT", VisualStatesMap::STATES_COMMANDMODULE_SPLITBUTTON},
            VisualPart{5, "SPLITBUTTONRIGHT", VisualStatesMap::STATES_COMMANDMODULE_SPLITBUTTON},
            VisualPart{6, "MENUGLYPH", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{7, "OVERFLOWGLYPH", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{8, "LIBRARYPANEMENUGLYPH", VisualStatesMap::STATES_COMMANDMODULE_LIBRARYPANE_GEN},
            VisualPart{9, "LIBRARYPANETOPVIEW", VisualStatesMap::STATES_COMMANDMODULE_LIBRARYPANE_GEN},
            VisualPart{10, "LIBRARYPANEBACKGROUND", VisualStatesMap::STATES_COMMON_DEFAULT},
        };

        inline static const QList<VisualPart> PARTS_COMMUNICATIONS
        {
            VisualPart{0, "Common Properties", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{1, "TAB", VisualStatesMap::STATES_TAB},
        };

        inline static const QList<VisualPart> PARTS_COMBOBOX
        {
            VisualPart{0, "Common Properties", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{1, "DROPDOWNBUTTON", VisualStatesMap::STATES_CB_STYLE},
            VisualPart{2, "BACKGROUND", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{3, "TRANSPARENTBACKGROUND", VisualStatesMap::STATES_CB_TRANSPARENTBG},
            VisualPart{4, "BORDER", VisualStatesMap::STATES_CB_BORDER},
            VisualPart{5, "READONLY", VisualStatesMap::STATES_CB_READONLY},
            VisualPart{6, "DROPDOWNBUTTONRIGHT", VisualStatesMap::STATES_CB_DROPDOWNLR},
            VisualPart{7, "DROPDOWNBUTTONLEFT", VisualStatesMap::STATES_CB_DROPDOWNLR},
            VisualPart{8, "CUEBANNER", VisualStatesMap::STATES_CB_CUEBANNER},
            VisualPart{9, "DROPDOWNITEM", VisualStatesMap::STATES_CP_DROPDOWNITEM},
        };

        inline static const QList<VisualPart> PARTS_CONTROLPANEL
        {
            VisualPart{0, "Common Properties", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{1, "NAVIGATIONPANE", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{2, "CONTENTPANE", VisualStatesMap::STATES_CONTROLPANEL_CONTENTPANE},
            VisualPart{3, "NAVPANELLABEL", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{4, "CONTENTPANELLABEL", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{5, "TITLE", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{6, "BODYTEXT", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{7, "HELPLINK", VisualStatesMap::STATES_LINK_HELP},
            VisualPart{8, "TASKLIST", VisualStatesMap::STATES_LINK_TASK},
            VisualPart{9, "GROUPTEXT", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{10, "CONTENTLINK", VisualStatesMap::STATES_LINK_CONTENT},
            VisualPart{11, "SECTIONTITLELINK", VisualStatesMap::STATES_LINK_SECTIONTITLE},
            VisualPart{12, "LARGECOMMANDAREA", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{13, "SMALLCOMMANDAREA", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{14, "BUTTON", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{15, "MESSAGETEXT", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{16, "NAVIGATIONPANELINE", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{17, "CONTENTPANELINE", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{18, "BANNERAREA", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{19, "BODYTITLE", VisualStatesMap::STATES_COMMON_DEFAULT},
        };

        inline static const QList<VisualPart> PARTS_COPYCLOSE
        {
            VisualPart{0, "Common Properties", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{1, "COPYCLOSEBTN", VisualStatesMap::STATES_COPYCLOSEBTN},
        };

        inline static const QList<VisualPart> PARTS_DROPLIST
        {
            VisualPart{0, "Common Properties", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{1, "MENUBUTTON", VisualStatesMap::STATES_COMMON_DEFAULT},
        };

        inline static const QList<VisualPart> PARTS_EMPTYMARKUP
        {
            VisualPart{0, "Common Properties", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{1, "MARKUPTEXT", VisualStatesMap::STATES_COMMON_DEFAULT},
        };

        inline static const QList<VisualPart> PARTS_EXPLORERBAR
        {
            VisualPart{0, "Common Properties", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{1, "HEADERBACKGROUND", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{2, "HEADERCLOSE", VisualStatesMap::STATES_EXPLORERBAR_GENERAL},
            VisualPart{3, "HEADERPIN", VisualStatesMap::STATES_EXPLORERBAR_HDRPIN},
            VisualPart{4, "IEBARMENU", VisualStatesMap::STATES_EXPLORERBAR_GENERAL},
            VisualPart{5, "NORMALGROUPBACKGROUND", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{6, "NORMALGROUPCOLLAPSE", VisualStatesMap::STATES_EXPLORERBAR_GENERAL},
            VisualPart{7, "NORMALGROUPEXPAND", VisualStatesMap::STATES_EXPLORERBAR_GENERAL},
            VisualPart{8, "NORMALGROUPHEAD", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{9, "SPECIALGROUPBACKGROUND", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{10, "SPECIALGROUPCOLLAPSE", VisualStatesMap::STATES_EXPLORERBAR_GENERAL},
            VisualPart{11, "SPECIALGROUPEXPAND", VisualStatesMap::STATES_EXPLORERBAR_GENERAL},
            VisualPart{12, "SPECIALGROUPHEAD", VisualStatesMap::STATES_COMMON_DEFAULT},
        };

        inline static const QList<VisualPart> PARTS_INFOBAR
        {
            VisualPart{0, "Common Properties", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{1, "BACKGROUND", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{2, "FOREGROUND", VisualStatesMap::STATES_COMMON_DEFAULT}, // W10
        };

        inline static const QList<VisualPart> PARTS_ITEMSVIEW
        {
            VisualPart{0, "Common Properties", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{1, "SEARCHHIT", VisualStatesMap::STATES_ITEMSVIEW_SEARCHHIT},
            VisualPart{2, "SUBSETBUTTON", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{3, "FOCUSRECT", VisualStatesMap::STATES_ITEMSVIEW_FOCUSRECT},
            VisualPart{4, "PROPERTY", VisualStatesMap::STATES_ITEMSVIEW_PROPERTY},
            VisualPart{5, "EMPTYTEXT", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{6, "FOCUSRECTINNER", VisualStatesMap::STATES_ITEMSVIEW_FOCUSRECT}, // W10
        };

        inline static const QList<VisualPart> PARTS_LISTBOX
        {
            VisualPart{0, "Common Properties", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{1, "BORDER_HSCROLL", VisualStatesMap::STATES_LISTBOX_SCROLL},
            VisualPart{2, "BORDER_HVSCROLL", VisualStatesMap::STATES_LISTBOX_SCROLL},
            VisualPart{3, "BORDER_NOSCROLL", VisualStatesMap::STATES_LISTBOX_SCROLL},
            VisualPart{4, "BORDER_VSCROLL", VisualStatesMap::STATES_LISTBOX_SCROLL},
            VisualPart{5, "ITEM", VisualStatesMap::STATES_LISTBOX_ITEMS},
        };

        inline static const QList<VisualPart> PARTS_LISTVIEW
        {
            VisualPart{0, "Common Properties", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{1, "LISTITEM", VisualStatesMap::STATES_LISTVIEW_ITEMS},
            VisualPart{2, "LISTGROUP", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{3, "LISTDETAIL", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{4, "LISTSORTEDDETAIL", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{5, "EMPTYTEXT", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{6, "GROUPHEADER", VisualStatesMap::STATES_LISTVIEW_GROUPHEADER_GENERAL},
            VisualPart{7, "GROUPHEADERLINE", VisualStatesMap::STATES_LISTVIEW_GROUPHEADER_GENERAL},
            VisualPart{8, "EXPANDBUTTON", VisualStatesMap::STATES_LISTVIEW_EXPCOLLAPSE},
            VisualPart{9, "COLLAPSEBUTTON", VisualStatesMap::STATES_LISTVIEW_EXPCOLLAPSE},
            VisualPart{10, "COLUMNDETAIL", VisualStatesMap::STATES_COMMON_DEFAULT},
        };

        inline static const QList<VisualPart> PARTS_LINK
        {
            VisualPart{0, "Common Properties", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{1, "HyperLink", VisualStatesMap::STATES_TOOLTIP_BALLOON_AND_STANDARD}, // reuse states
        };

        inline static const QList<VisualPart> PARTS_MENU
        {
            VisualPart{0, "Common Properties", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{1, "MENUITEM", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{2, "MENUDROPDOWN", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{3, "MENUBARITEM", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{4, "MENUBARDROPDOWN", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{5, "CHEVRON", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{6, "SEPARATOR", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{7, "BARBACKGROUND", VisualStatesMap::STATES_MENU_BARBACKGROUND},
            VisualPart{8, "BARITEM", VisualStatesMap::STATES_MENU_BARITEM},
            VisualPart{9, "POPUPBACKGROUND", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{10, "POPUPBORDERS", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{11, "POPUPCHECK", VisualStatesMap::STATES_MENU_POPCHECK},
            VisualPart{12, "POPUPCHECKBACKGROUND", VisualStatesMap::STATES_MENU_POPCHECKBG},
            VisualPart{13, "POPUPGUTTER", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{14, "POPUPITEM", VisualStatesMap::STATES_MENU_POPITEMS},
            VisualPart{15, "POPUPSEPARATOR", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{16, "POPUPSUBMENU", VisualStatesMap::STATES_MENU_SYSTEM_GENERAL},
            VisualPart{17, "SYSTEMCLOSE", VisualStatesMap::STATES_MENU_SYSTEM_GENERAL},
            VisualPart{18, "SYSTEMMAXIMIZE", VisualStatesMap::STATES_MENU_SYSTEM_GENERAL},
            VisualPart{19, "SYSTEMMINIMIZE", VisualStatesMap::STATES_MENU_SYSTEM_GENERAL},
            VisualPart{20, "SYSTEMRESTORE", VisualStatesMap::STATES_MENU_SYSTEM_GENERAL},
        };

        inline static const QList<VisualPart> PARTS_MENUBAND
        {
            VisualPart{0, "Common Properties", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{1, "NEWAPPBUTTON", VisualStatesMap::STATES_MDP_NEWAPPBUTTON},
            VisualPart{2, "SEPARATOR", VisualStatesMap::STATES_COMMON_DEFAULT},
        };

        inline static const QList<VisualPart> PARTS_NAVIGATION
        {
            VisualPart{0, "Common Properties", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{1, "BACKBUTTON", VisualStatesMap::STATES_PUSHBUTTON}, // reuse button states
            VisualPart{2, "FORWARDBUTTON", VisualStatesMap::STATES_PUSHBUTTON},
            VisualPart{3, "MENUBUTTON", VisualStatesMap::STATES_PUSHBUTTON},
        };

        inline static const QList<VisualPart> PARTS_TREEVIEW
        {
            VisualPart{0, "Common Properties", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{1, "TREEITEM", VisualStatesMap::STATES_TREEVIEW_ITEM},
            VisualPart{2, "GLYPH", VisualStatesMap::STATES_TREEVIEW_GLYPH},
            VisualPart{3, "BRANCH", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{4, "HOTGLYPH", VisualStatesMap::STATES_TREEVIEW_GLYPH},
        };

        inline static const QList<VisualPart> PARTS_WINDOW
        {
            VisualPart{0, "Common Properties", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{1, "CAPTION", VisualStatesMap::STATES_WINDOW_CAPTION_GEN},
            VisualPart{2, "SMALLCAPTION", VisualStatesMap::STATES_WINDOW_CAPTION_GEN},
            VisualPart{3, "MINCAPTION", VisualStatesMap::STATES_WINDOW_CAPTION_GEN},
            VisualPart{4, "SMALLMINCAPTION", VisualStatesMap::STATES_WINDOW_CAPTION_GEN},
            VisualPart{5, "MAXCAPTION", VisualStatesMap::STATES_WINDOW_CAPTION_GEN},
            VisualPart{6, "SMALLMAXCAPTION", VisualStatesMap::STATES_WINDOW_CAPTION_GEN},
            VisualPart{7, "FRAMELEFT", VisualStatesMap::STATES_WINDOW_FRAME_GEN},
            VisualPart{8, "FRAMERIGHT", VisualStatesMap::STATES_WINDOW_FRAME_GEN},
            VisualPart{9, "FRAMEBOTTOM", VisualStatesMap::STATES_WINDOW_FRAME_GEN},
            VisualPart{10, "SMALLFRAMELEFT", VisualStatesMap::STATES_WINDOW_FRAME_GEN},
            VisualPart{11, "SMALLFRAMERIGHT", VisualStatesMap::STATES_WINDOW_FRAME_GEN},
            VisualPart{12, "SMALLFRAMEBOTTOM", VisualStatesMap::STATES_WINDOW_FRAME_GEN},
            VisualPart{13, "SYSBUTTON", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{14, "MDISYSBUTTON", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{15, "MINBUTTON", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{16, "MDIMINBUTTON", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{17, "MAXBUTTON", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{18, "CLOSEBUTTON", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{19, "SMALLCLOSEBUTTON", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{20, "MDICLOSEBUTTON", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{21, "RESTOREBUTTON", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{22, "MDIRESTOREBUTTON", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{23, "HELPBUTTON", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{24, "MDIHELPBUTTON", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{25, "HORZSCROLL", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{26, "HORZTHUMB", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{27, "VERTSCROLL", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{28, "VERTTHUMB", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{29, "DIALOG", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{30, "CAPTIONSIZINGTEMPLATE", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{31, "SMALLCAPTIONSIZINGTEMPLATE", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{32, "FRAMELEFTSIZINGTEMPLATE", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{33, "SMALLFRAMELEFTSIZINGTEMPLATE", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{34, "FRAMERIGHTSIZINGTEMPLATE", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{35, "SMALLFRAMERIGHTSIZINGTEMPLATE", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{36, "FRAMEBOTTOMSIZINGTEMPLATE", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{37, "SMALLFRAMEBOTTOMSIZINGTEMPLATE", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{38, "FRAME", VisualStatesMap::STATES_WINDOW_FRAME_GEN},
            VisualPart{39, "BORDER", VisualStatesMap::STATES_COMMON_DEFAULT},
        };

        inline static const QList<VisualPart> PARTS_DWMPEN
        {
            VisualPart{0, "Common Properties", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{1, "PENBARREL", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{2, "PENHOLD", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{3, "PENRIGHTTAP", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{4, "PENTAP", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{5, "PENDOUBLETAP", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{6, "FLICKSCROLLUP", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{7, "FLICKSCROLLDOWN", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{8, "FLICKDRAGUP", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{9, "FLICKDRAGDOWN", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{10, "FLICKFORWARD", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{11, "FLICKBACKWARD", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{12, "FLICKCUT", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{13, "FLICKCOPY", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{14, "FLICKPASTE", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{15, "FLICKUNDO", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{16, "FLICKREDO", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{17, "FLICKPRINT", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{18, "FLICKDELETE", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{19, "FLICKOPEN", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{20, "FLICKSAVE", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{21, "FLICKMODIFIERKEY", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{22, "FLICKSHIFTKEY", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{23, "FLICKWINKEY", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{24, "FLICKGENERICKEY", VisualStatesMap::STATES_COMMON_DEFAULT},
        };

        inline static const QList<VisualPart> PARTS_DWMTOUCH
        {
            VisualPart{0, "Common Properties", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{1, "TOUCHDRAG", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{2, "TOUCHCONTACT", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{3, "TETHER", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{4, "TEXTHANDLEBLACK", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{5, "TEXTHANDLEWHITE", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{6, "TOUCHDOUBLECONTACT", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{7, "TOUCHCONTACTPRESENTATIONMODE", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{8, "INDIRECTTOUCH", VisualStatesMap::STATES_COMMON_DEFAULT},
        };

        // Definitive parts for Win 7, using the real names from a PDB of Win 8 build 7762, where
        // DWM is identical to Win 7's.
        inline static const QList<VisualPart> PARTS_DWMWINDOW_WIN7
        {
            VisualPart{0, "Common Properties", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{1, "BOTTOMFRAME", VisualStatesMap::STATES_WINDOW_FRAME_GEN},
            VisualPart{2, "BOTTOMSHADOW", VisualStatesMap::STATES_WINDOW_FRAME_GEN},
            VisualPart{3, "BUTTONACTIVECAPTION", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{4, "BUTTONINACTIVECAPTION", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{5, "BUTTONACTIVECAPTIONEND", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{6, "BUTTONINACTIVECAPTIONEND", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{7, "BUTTONACTIVECLOSE", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{8, "BUTTONINACTIVECLOSE", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{9, "BUTTONACTIVECLOSEALONE", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{10, "BUTTONINACTIVECLOSEALONE", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{11, "BUTTONCLOSEGLOW", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{12, "BUTTONCLOSEGLYPH96", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{13, "BUTTONCLOSEGLYPH120", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{14, "BUTTONCLOSEGLYPH144", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{15, "BUTTONCLOSEGLYPH192", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{16, "BUTTONGLOW", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{17, "BUTTONHELPGLYPH96", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{18, "BUTTONHELPGLYPH120", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{19, "BUTTONHELPGLYPH144", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{20, "BUTTONHELPGLYPH192", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{21, "BUTTONMAXGLYPH96", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{22, "BUTTONMAXGLYPH120", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{23, "BUTTONMAXGLYPH144", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{24, "BUTTONMAXGLYPH192", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{25, "BUTTONMINGLYPH96", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{26, "BUTTONMINGLYPH120", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{27, "BUTTONMINGLYPH144", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{28, "BUTTONMINGLYPH192", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{29, "BUTTONRESTOREGLYPH96", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{30, "BUTTONRESTOREGLYPH120", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{31, "BUTTONRESTOREGLYPH144", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{32, "BUTTONRESTOREGLYPH192", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{33, "LEFTFRAME", VisualStatesMap::STATES_WINDOW_FRAME_GEN},
            VisualPart{34, "LEFTHIGHLIGHTCORNER", VisualStatesMap::STATES_WINDOW_FRAME_GEN},
            VisualPart{35, "LEFTSHADOW", VisualStatesMap::STATES_WINDOW_FRAME_GEN},
            VisualPart{36, "FLIP3DBOTTOMFRAME", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{37, "FLIP3DLEFTFRAME", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{38, "FLIP3DRIGHTFRAME", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{39, "FLIP3DTOPFRAME", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{40, "REFLECTIONMAP", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{41, "RIGHTFRAME", VisualStatesMap::STATES_WINDOW_FRAME_GEN},
            VisualPart{42, "RIGHTSHADOW", VisualStatesMap::STATES_WINDOW_FRAME_GEN},
            VisualPart{43, "SIDEHIGHLIGHT", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{44, "SMALLBOTTOMFRAME", VisualStatesMap::STATES_WINDOW_FRAME_GEN},
            VisualPart{45, "SMALLBUTTONACTIVECLOSE", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{46, "SMALLBUTTONINACTIVECLOSE", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{47, "SMALLBUTTONCLOSEGLOW", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{48, "SMALLBUTTONCLOSEGLYPH96", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{49, "SMALLBUTTONCLOSEGLYPH120", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{50, "SMALLBUTTONCLOSEGLYPH144", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{51, "SMALLBUTTONCLOSEGLYPH192", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{52, "SMALLLEFTFRAME", VisualStatesMap::STATES_WINDOW_FRAME_GEN},
            VisualPart{53, "SMALLRIGHTFRAME", VisualStatesMap::STATES_WINDOW_FRAME_GEN},
            VisualPart{54, "SMALLTOPFRAME", VisualStatesMap::STATES_WINDOW_FRAME_GEN},
            VisualPart{55, "TEXTGLOW", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{56, "TOPFRAME", VisualStatesMap::STATES_WINDOW_FRAME_GEN},
            VisualPart{57, "TOPSHADOW", VisualStatesMap::STATES_WINDOW_FRAME_GEN},
            VisualPart{58, "TOPFRAMENOSHADOW", VisualStatesMap::STATES_WINDOW_FRAME_GEN},
            VisualPart{59, "BOTTOMFRAMENOSHADOW", VisualStatesMap::STATES_WINDOW_FRAME_GEN},
            VisualPart{60, "LEFTFRAMESQUEEGEE", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{61, "RIGHTFRAMESQUEEGEE", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{62, "TOPFRAMESQUEEGEE", VisualStatesMap::STATES_WINDOW_FRAME_GEN},
            VisualPart{63, "BOTTOMFRAMESQUEEGEE", VisualStatesMap::STATES_WINDOW_FRAME_GEN},
            VisualPart{64, "SMALLLEFTFRAMESQUEEGEE", VisualStatesMap::STATES_WINDOW_FRAME_GEN},
            VisualPart{65, "SMALLRIGHTFRAMESQUEEGEE", VisualStatesMap::STATES_WINDOW_FRAME_GEN},
            VisualPart{66, "SMALLTOPFRAMESQUEEGEE", VisualStatesMap::STATES_WINDOW_FRAME_GEN},
            VisualPart{67, "SMALLBOTTOMFRAMESQUEEGEE", VisualStatesMap::STATES_WINDOW_FRAME_GEN},
            VisualPart{68, "BITMAPPENDING", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{69, "RIPPLE", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{70, "TOPFRAMESQUEEGEENOSHADOW", VisualStatesMap::STATES_WINDOW_FRAME_GEN},
            VisualPart{71, "BOTTOMFRAMESQUEEGEENOSHADOW", VisualStatesMap::STATES_WINDOW_FRAME_GEN},
        };

    // Definitive parts for Win 8.1, using the real names from the PDBs
        inline static const QList<VisualPart> PARTS_DWMWINDOW_WIN81
        {
            VisualPart{0, "Common Properties", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{1, "BOTTOMFRAME", VisualStatesMap::STATES_WINDOW_FRAME_GEN},
            VisualPart{2, "BOTTOMSHADOW", VisualStatesMap::STATES_WINDOW_FRAME_GEN},
            VisualPart{3, "BUTTONACTIVECAPTION", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{4, "BUTTONINACTIVECAPTION", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{5, "BUTTONACTIVECAPTIONEND", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{6, "BUTTONINACTIVECAPTIONEND", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{7, "BUTTONACTIVECLOSE", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{8, "BUTTONINACTIVECLOSE", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{9, "BUTTONACTIVECLOSEALONE", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{10, "BUTTONINACTIVECLOSEALONE", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{11, "BUTTONCLOSEGLOW", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{12, "BUTTONCLOSEGLYPH96", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{13, "BUTTONCLOSEGLYPH120", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{14, "BUTTONCLOSEGLYPH144", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{15, "BUTTONCLOSEGLYPH192", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{16, "BUTTONHELPGLYPH96", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{17, "BUTTONHELPGLYPH120", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{18, "BUTTONHELPGLYPH144", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{19, "BUTTONHELPGLYPH192", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{20, "BUTTONMAXGLYPH96", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{21, "BUTTONMAXGLYPH120", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{22, "BUTTONMAXGLYPH144", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{23, "BUTTONMAXGLYPH192", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{24, "BUTTONMINGLYPH96", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{25, "BUTTONMINGLYPH120", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{26, "BUTTONMINGLYPH144", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{27, "BUTTONMINGLYPH192", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{28, "BUTTONRESTOREGLYPH96", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{29, "BUTTONRESTOREGLYPH120", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{30, "BUTTONRESTOREGLYPH144", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{31, "BUTTONRESTOREGLYPH192", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{32, "LEFTFRAME", VisualStatesMap::STATES_WINDOW_FRAME_GEN},
            VisualPart{33, "LEFTSHADOW", VisualStatesMap::STATES_WINDOW_FRAME_GEN},
            VisualPart{34, "RIGHTFRAME", VisualStatesMap::STATES_WINDOW_FRAME_GEN},
            VisualPart{35, "RIGHTSHADOW", VisualStatesMap::STATES_WINDOW_FRAME_GEN},
            VisualPart{36, "SMALLBOTTOMFRAME", VisualStatesMap::STATES_WINDOW_FRAME_GEN},
            VisualPart{37, "SMALLBUTTONACTIVECLOSE", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{38, "SMALLBUTTONINACTIVECLOSE", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{39, "SMALLBUTTONCLOSEGLYPH96", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{40, "SMALLBUTTONCLOSEGLYPH120", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{41, "SMALLBUTTONCLOSEGLYPH144", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{42, "SMALLBUTTONCLOSEGLYPH192", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{43, "SMALLLEFTFRAME", VisualStatesMap::STATES_WINDOW_FRAME_GEN},
            VisualPart{44, "SMALLRIGHTFRAME", VisualStatesMap::STATES_WINDOW_FRAME_GEN},
            VisualPart{45, "SMALLTOPFRAME", VisualStatesMap::STATES_WINDOW_FRAME_GEN},
            VisualPart{46, "TEXTGLOW", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{47, "TOPFRAME", VisualStatesMap::STATES_WINDOW_FRAME_GEN},
            VisualPart{48, "TOPSHADOW", VisualStatesMap::STATES_WINDOW_FRAME_GEN},
            VisualPart{49, "TOPFRAMENOSHADOW", VisualStatesMap::STATES_WINDOW_FRAME_GEN},
            VisualPart{50, "BOTTOMFRAMENOSHADOW", VisualStatesMap::STATES_WINDOW_FRAME_GEN},
            VisualPart{51, "LEFTFRAMESQUEEGEE", VisualStatesMap::STATES_WINDOW_FRAME_GEN},
            VisualPart{52, "RIGHTFRAMESQUEEGEE", VisualStatesMap::STATES_WINDOW_FRAME_GEN},
            VisualPart{53, "TOPFRAMESQUEEGEE", VisualStatesMap::STATES_WINDOW_FRAME_GEN},
            VisualPart{54, "BOTTOMFRAMESQUEEGEE", VisualStatesMap::STATES_WINDOW_FRAME_GEN},
            VisualPart{55, "SMALLLEFTFRAMESQUEEGEE", VisualStatesMap::STATES_WINDOW_FRAME_GEN},
            VisualPart{56, "SMALLRIGHTFRAMESQUEEGEE", VisualStatesMap::STATES_WINDOW_FRAME_GEN},
            VisualPart{57, "SMALLTOPFRAMESQUEEGEE", VisualStatesMap::STATES_WINDOW_FRAME_GEN},
            VisualPart{58, "SMALLBOTTOMFRAMESQUEEGEE", VisualStatesMap::STATES_WINDOW_FRAME_GEN},
            VisualPart{59, "BITMAPPENDING", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{60, "RIPPLE", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{61, "TOPFRAMESQUEEGEENOSHADOW", VisualStatesMap::STATES_WINDOW_FRAME_GEN},
            VisualPart{62, "BOTTOMFRAMESQUEEGEENOSHADOW", VisualStatesMap::STATES_WINDOW_FRAME_GEN},
            VisualPart{63, "SQUEEGEEREFLECTIONMAP", VisualStatesMap::STATES_WINDOW_FRAME_GEN},
            VisualPart{64, "THUMBNAILBORDER", VisualStatesMap::STATES_WINDOW_FRAME_GEN}


        };
    // Definitive parts for W10, using the real names from the PDBs
    // States are generic and might not match every part.
        inline static const QList<VisualPart> PARTS_DWMWINDOW_WIN10
        {
            VisualPart{0, "Common Properties", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{1, "BOTTOMFRAME", VisualStatesMap::STATES_WINDOW_FRAME_GEN},
            VisualPart{2, "BOTTOMSHADOW", VisualStatesMap::STATES_WINDOW_FRAME_GEN},
            VisualPart{3, "BUTTONACTIVECAPTION", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{4, "BUTTONINACTIVECAPTION", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{5, "BUTTONACTIVECAPTIONEND", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{6, "BUTTONINACTIVECAPTIONEND", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{7, "BUTTONACTIVECLOSE", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{8, "BUTTONINACTIVECLOSE", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{9, "BUTTONACTIVECLOSEALONE", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{10, "BUTTONINACTIVECLOSEALONE", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{11, "BUTTONCLOSEGLYPH96", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{12, "BUTTONCLOSEGLYPH120", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{13, "BUTTONCLOSEGLYPH144", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{14, "BUTTONCLOSEGLYPH192", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{15, "BUTTONHELPGLYPH96", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{16, "BUTTONHELPGLYPH120", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{17, "BUTTONHELPGLYPH144", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{18, "BUTTONHELPGLYPH192", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{19, "BUTTONMAXGLYPH96", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{20, "BUTTONMAXGLYPH120", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{21, "BUTTONMAXGLYPH144", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{22, "BUTTONMAXGLYPH192", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{23, "BUTTONMINGLYPH96", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{24, "BUTTONMINGLYPH120", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{25, "BUTTONMINGLYPH144", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{26, "BUTTONMINGLYPH192", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{27, "BUTTONRESTOREGLYPH96", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{28, "BUTTONRESTOREGLYPH120", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{29, "BUTTONRESTOREGLYPH144", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{30, "BUTTONRESTOREGLYPH192", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{31, "LEFTFRAME", VisualStatesMap::STATES_WINDOW_FRAME_GEN},
            VisualPart{32, "LEFTSHADOW", VisualStatesMap::STATES_WINDOW_FRAME_GEN},
            VisualPart{33, "RIGHTFRAME", VisualStatesMap::STATES_WINDOW_FRAME_GEN},
            VisualPart{34, "RIGHTSHADOW", VisualStatesMap::STATES_WINDOW_FRAME_GEN},
            VisualPart{35, "SMALLBOTTOMFRAME", VisualStatesMap::STATES_WINDOW_FRAME_GEN},
            VisualPart{36, "SMALLBUTTONACTIVECLOSE", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{37, "SMALLBUTTONINACTIVECLOSE", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{38, "SMALLBUTTONCLOSEGLYPH96", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{39, "SMALLBUTTONCLOSEGLYPH120", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{40, "SMALLBUTTONCLOSEGLYPH144", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{41, "SMALLBUTTONCLOSEGLYPH192", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{42, "SMALLLEFTFRAME", VisualStatesMap::STATES_WINDOW_FRAME_GEN},
            VisualPart{43, "SMALLRIGHTFRAME", VisualStatesMap::STATES_WINDOW_FRAME_GEN},
            VisualPart{44, "SMALLTOPFRAME", VisualStatesMap::STATES_WINDOW_FRAME_GEN},
            VisualPart{45, "TEXTGLOW", VisualStatesMap::STATES_WINDOW_FRAME_GEN},
            VisualPart{46, "TOPFRAME", VisualStatesMap::STATES_WINDOW_FRAME_GEN},
            VisualPart{47, "TOPSHADOW", VisualStatesMap::STATES_WINDOW_FRAME_GEN},
            VisualPart{48, "TOPFRAMENOSHADOW", VisualStatesMap::STATES_WINDOW_FRAME_GEN},
            VisualPart{49, "BOTTOMFRAMENOSHADOW", VisualStatesMap::STATES_WINDOW_FRAME_GEN},
            VisualPart{50, "LEFTFRAMESQUEEGEE", VisualStatesMap::STATES_WINDOW_FRAME_GEN},
            VisualPart{51, "RIGHTFRAMESQUEEGEE", VisualStatesMap::STATES_WINDOW_FRAME_GEN},
            VisualPart{52, "TOPFRAMESQUEEGEE", VisualStatesMap::STATES_WINDOW_FRAME_GEN},
            VisualPart{53, "BOTTOMFRAMESQUEEGEE", VisualStatesMap::STATES_WINDOW_FRAME_GEN},
            VisualPart{54, "SMALLLEFTFRAMESQUEEGEE", VisualStatesMap::STATES_WINDOW_FRAME_GEN},
            VisualPart{55, "SMALLRIGHTFRAMESQUEEGEE", VisualStatesMap::STATES_WINDOW_FRAME_GEN},
            VisualPart{56, "SMALLTOPFRAMESQUEEGEE", VisualStatesMap::STATES_WINDOW_FRAME_GEN},
            VisualPart{57, "SMALLBOTTOMFRAMESQUEEGEE", VisualStatesMap::STATES_WINDOW_FRAME_GEN},
            VisualPart{58, "BITMAPPENDING", VisualStatesMap::STATES_WINDOW_FRAME_GEN},
            VisualPart{59, "RIPPLE", VisualStatesMap::STATES_WINDOW_FRAME_GEN},
            VisualPart{60, "TOPFRAMESQUEEGEENOSHADOW", VisualStatesMap::STATES_WINDOW_FRAME_GEN},
            VisualPart{61, "BOTTOMFRAMESQUEEGEENOSHADOW", VisualStatesMap::STATES_WINDOW_FRAME_GEN},
            VisualPart{62, "SQUEEGEEREFLECTIONMAP", VisualStatesMap::STATES_WINDOW_FRAME_GEN},
            VisualPart{63, "THUMBNAILBORDER", VisualStatesMap::STATES_WINDOW_FRAME_GEN},
            VisualPart{64, "BUTTONCLOSEGLYPH96DARK", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{65, "BUTTONCLOSEGLYPH120DARK", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{66, "BUTTONCLOSEGLYPH144DARK", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{67, "BUTTONCLOSEGLYPH192DARK", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{68, "BUTTONHELPGLYPH96DARK", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{69, "BUTTONHELPGLYPH120DARK", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{70, "BUTTONHELPGLYPH144DARK", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{71, "BUTTONHELPGLYPH192DARK", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{72, "BUTTONMAXGLYPH96DARK", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{73, "BUTTONMAXGLYPH120DARK", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{74, "BUTTONMAXGLYPH144DARK", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{75, "BUTTONMAXGLYPH192DARK", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{76, "BUTTONMINGLYPH96DARK", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{77, "BUTTONMINGLYPH120DARK", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{78, "BUTTONMINGLYPH144DARK", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{79, "BUTTONMINGLYPH192DARK", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{80, "BUTTONRESTOREGLYPH96DARK", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{81, "BUTTONRESTOREGLYPH120DARK", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{82, "BUTTONRESTOREGLYPH144DARK", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{83, "BUTTONRESTOREGLYPH192DARK", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{84, "SMALLBUTTONCLOSEGLYPH96DARK", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{85, "SMALLBUTTONCLOSEGLYPH120DARK", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{86, "SMALLBUTTONCLOSEGLYPH144DARK", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{87, "SMALLBUTTONCLOSEGLYPH192DARK", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{88, "BUTTONACTIVECAPTIONDARK", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{89, "BUTTONINACTIVECAPTIONDARK", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{90, "BUTTONACTIVECAPTIONENDDARK", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
            VisualPart{91, "BUTTONINACTIVECAPTIONENDDARK", VisualStatesMap::STATES_WINDOW_BTN_AND_THUMB},
        };

        inline static const QList<VisualPart> PARTS_EDIT
        {
            VisualPart{0, "Common Properties", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{1, "EDITTEXT", VisualStatesMap::STATES_EDITTEXT},
            VisualPart{2, "CARET", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{3, "BACKGROUND", VisualStatesMap::STATES_EDITTEXT_BG},
            VisualPart{4, "PASSWORD", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{5, "BACKGROUNDWITHBORDER", VisualStatesMap::STATES_EDITTEXT_BGWITHBORDER},
            VisualPart{6, "EDITBORDER_NOSCROLL", VisualStatesMap::STATES_EDITTEXT_GENERAL},
            VisualPart{7, "EDITBORDER_HSCROLL", VisualStatesMap::STATES_EDITTEXT_GENERAL},
            VisualPart{8, "EDITBORDER_VSCROL", VisualStatesMap::STATES_EDITTEXT_GENERAL},
            VisualPart{9, "EDITBORDER_HVSCROLL", VisualStatesMap::STATES_EDITTEXT_GENERAL},
        };

        inline static const QList<VisualPart> PARTS_TASKDIALOG
        {
            VisualPart{0, "Common Properties", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{1, "PRIMARYPANEL", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{2, "MAININSTRUCTIONPANE", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{3, "MAINICON", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{4, "CONTENTPANE", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{5, "CONTENTICON", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{6, "EXPANDEDCONTENT", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{7, "COMMANDLINKPANE", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{8, "SECONDARYPANEL", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{9, "CONTROLPANE", VisualStatesMap::STATES_TASKDLG_CONTROLPANE},
            VisualPart{10, "BUTTONSECTION", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{11, "BUTTONWRAPPER", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{12, "EXPANDOTEXT", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{13, "EXPANDOBUTTON", VisualStatesMap::STATES_TASKDLG_EXPANDOBUTTON},
            VisualPart{14, "VERIFICATIONTEXT", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{15, "FOOTNOTEPANE", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{16, "FOOTNOTEAREA", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{17, "FOOTNOTESEPARATOR", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{18, "EXPANDEDFOOTERAREA", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{19, "PROGRESSBAR", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{20, "IMAGEALIGNMENT", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{21, "RADIOBUTTONPANE", VisualStatesMap::STATES_COMMON_DEFAULT},
        };

        inline static const QList<VisualPart> PARTS_HEADER
        {
            VisualPart{0, "Common Properties", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{1, "HEADERITEM", VisualStatesMap::STATES_HEADER_ITEMSTATES},
            VisualPart{2, "HEADERITEMLEFT", VisualStatesMap::STATES_HEADER_LEFT_AND_RIGHT},
            VisualPart{3, "HEADERITEMRIGHT", VisualStatesMap::STATES_HEADER_LEFT_AND_RIGHT},
            VisualPart{4, "HEADERSORTARROW", VisualStatesMap::STATES_HEADERSORTARROWSTATES},
            VisualPart{5, "HEADERDROPDOWN", VisualStatesMap::STATES_HEADERDROPDOWNSTATES},
            VisualPart{6, "HEADERDROPDOWNFILTER", VisualStatesMap::STATES_HEADERDROPDOWNFILTERSTATES},
            VisualPart{7, "HEADEROVERFLOW", VisualStatesMap::STATES_HEADEROVERFLOWSTATES},
        };

        inline static const QList<VisualPart> PARTS_READINGPANE
        {
            VisualPart{0, "Common Properties", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{1, "BACKGROUNDCOLORS", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{2, "LABEL", VisualStatesMap::STATES_COMMON_DEFAULT},
        };

        inline static const QList<VisualPart> PARTS_REBAR
        {
            VisualPart{0, "Common Properties", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{1, "GRIPPER", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{2, "GRIPPERVERT", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{3, "BAND", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{4, "CHEVRON", VisualStatesMap::STATES_REBAR_GENERAL},
            VisualPart{5, "CHEVRONVERT", VisualStatesMap::STATES_REBAR_GENERAL},
            VisualPart{6, "BACKGROUND", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{7, "SPLITTER", VisualStatesMap::STATES_REBAR_GENERAL},
            VisualPart{8, "SPLITTERVERT", VisualStatesMap::STATES_REBAR_GENERAL},
        };

        inline static const QList<VisualPart> PARTS_AEROWIZARD
        {
            VisualPart{0, "Common Properties", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{1, "TITLEBAR", VisualStatesMap::STATES_WINDOW_FRAME_GEN}, // reuse
            VisualPart{2, "HEADERAREA", VisualStatesMap::STATES_AEROWIZARD_HEADERAREA},
            VisualPart{3, "CONTENTAREA", VisualStatesMap::STATES_AEROWIZARD_HEADERAREA},
            VisualPart{4, "COMMANDAREA", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{5, "BUTTON", VisualStatesMap::STATES_COMMON_DEFAULT},
        };

        inline static const QList<VisualPart> PARTS_PAGE
        {
            VisualPart{0, "Common Properties", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{1, "UP", VisualStatesMap::STATES_PAGE_GENERAL},
            VisualPart{1, "DOWN", VisualStatesMap::STATES_PAGE_GENERAL},
            VisualPart{1, "UPHORZ", VisualStatesMap::STATES_PAGE_GENERAL},
            VisualPart{1, "DOWNHORZ", VisualStatesMap::STATES_PAGE_GENERAL},
        };

        inline static const QList<VisualPart> PARTS_PAUSE
        {
            VisualPart{0, "Common Properties", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{1, "PAUSEBUTTON", VisualStatesMap::STATES_COMMON_DEFAULT},
        };

        inline static const QList<VisualPart> PARTS_PROGRESS
        {
            VisualPart{0, "Common Properties", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{1, "BAR", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{2, "BARVERT", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{3, "CHUNK", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{4, "CHUNKVERT", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{5, "FILL", VisualStatesMap::STATES_PROGRESS_FILL_GENERAL},
            VisualPart{6, "FILLVERT", VisualStatesMap::STATES_PROGRESS_FILL_GENERAL},
            VisualPart{7, "PULSEOVERLAY", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{8, "MOVEOVERLAY", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{9, "PULSEOVERLAYVERT", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{10, "MOVEOVERLAYVERT", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{11, "TRANSPARENTBAR", VisualStatesMap::STATES_PROGRESS_TRANSPARENT_GENERAL},
            VisualPart{12, "TRANSPARENTBARVERT", VisualStatesMap::STATES_PROGRESS_TRANSPARENT_GENERAL},
        };

        inline static const QList<VisualPart> PARTS_PROPERTREE
        {
            VisualPart{0, "Common Properties", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{1, "FOLDERSHEADER", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{2, "BACKGROUND", VisualStatesMap::STATES_COMMON_DEFAULT},
        };

        inline static const QList<VisualPart> PARTS_PREVIEWPANE
        {
            VisualPart{0, "Common Properties", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{1, "PREVIEWBACKGROUND", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{2, "EDITPROPERTIES", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{3, "NAVPANESIZER", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{4, "READINGPANESIZER", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{5, "TITLE", VisualStatesMap::STATES_PROGRESS_FILL_GENERAL},
            VisualPart{6, "LABEL", VisualStatesMap::STATES_PROGRESS_FILL_GENERAL},
            VisualPart{7, "VALUE", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{8, "LABELCID", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{9, "VALUECID", VisualStatesMap::STATES_COMMON_DEFAULT}
        };

        inline static const QList<VisualPart> PARTS_TRACKBAR
        {
            VisualPart{0, "Common Properties", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{1, "TRACK", VisualStatesMap::STATES_TRACKBAR_GENERAL},
            VisualPart{2, "TRACKVERT", VisualStatesMap::STATES_TRACKBAR_GENERAL},
            VisualPart{3, "THUMB", VisualStatesMap::STATES_TRACKBAR_THUMB_GEN},
            VisualPart{4, "THUMBBOTTOM", VisualStatesMap::STATES_TRACKBAR_THUMB_GEN},
            VisualPart{5, "THUMBTOP", VisualStatesMap::STATES_TRACKBAR_THUMB_GEN},
            VisualPart{6, "THUMBVERT", VisualStatesMap::STATES_TRACKBAR_THUMB_GEN},
            VisualPart{7, "THUMBLEFT", VisualStatesMap::STATES_TRACKBAR_THUMB_GEN},
            VisualPart{8, "THUMBRIGHT", VisualStatesMap::STATES_TRACKBAR_THUMB_GEN},
            VisualPart{9, "TICS", VisualStatesMap::STATES_TRACKBAR_GENERAL},
            VisualPart{10, "TICSVERT", VisualStatesMap::STATES_TRACKBAR_GENERAL},
        };

        inline static const QList<VisualPart> PARTS_TAB
        {
            VisualPart{0, "Common Properties", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{1, "TABITEM", VisualStatesMap::STATES_TABITEM_GENERAL},
            VisualPart{2, "TABITEMLEFTEDGE", VisualStatesMap::STATES_TABITEM_GENERAL},
            VisualPart{3, "TABITEMRIGHTEDGE", VisualStatesMap::STATES_TABITEM_GENERAL},
            VisualPart{4, "TABITEMBOTHEDGE", VisualStatesMap::STATES_TABITEM_GENERAL},
            VisualPart{5, "TOPTABITEM", VisualStatesMap::STATES_TABITEM_GENERAL},
            VisualPart{6, "TOPTABITEMLEFTEDGE", VisualStatesMap::STATES_TABITEM_GENERAL},
            VisualPart{7, "TOPTABITEMRIGHTEDGE", VisualStatesMap::STATES_TABITEM_GENERAL},
            VisualPart{8, "TOPTABITEMBOTHEDGE", VisualStatesMap::STATES_TABITEM_GENERAL},
            VisualPart{9, "PANE", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{10, "BODY", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{11, "AEROWIZARDBODY", VisualStatesMap::STATES_COMMON_DEFAULT},
        };

        inline static const QList<VisualPart> PARTS_TOOLTIP
        {
            VisualPart{0, "Common Properties", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{1, "STANDARD", VisualStatesMap::STATES_TOOLTIP_BALLOON_AND_STANDARD},
            VisualPart{2, "STANDARDTITLE", VisualStatesMap::STATES_TOOLTIP_BALLOON_AND_STANDARD},
            VisualPart{3, "BALLOON", VisualStatesMap::STATES_TOOLTIP_BALLOON_AND_STANDARD},
            VisualPart{4, "BALLOONTITLE", VisualStatesMap::STATES_TOOLTIP_BALLOON_AND_STANDARD},
            VisualPart{5, "CLOSE", VisualStatesMap::STATES_TOOLTIP_CLOSE},
            VisualPart{6, "BALLOONSTEM", VisualStatesMap::STATES_TOOLTIP_BALLOONSTEM},
            VisualPart{7, "WRENCH", VisualStatesMap::STATES_TOOLTIP_WRENCH},
        };

        inline static const QList<VisualPart> PARTS_TOOLBAR
        {
            VisualPart{0, "Common Properties", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{1, "BUTTON", VisualStatesMap::STATES_TOOLBARSTYLE},
            VisualPart{2, "DROPDOWNBUTTON", VisualStatesMap::STATES_TOOLBARSTYLE},
            VisualPart{3, "SPLITBUTTON", VisualStatesMap::STATES_TOOLBARSTYLE},
            VisualPart{4, "SPLITBUTTONDROPDOWN", VisualStatesMap::STATES_TOOLBARSTYLE},
            VisualPart{5, "SEPARATOR", VisualStatesMap::STATES_TOOLBARSTYLE},
            VisualPart{6, "SEPARATORVERT", VisualStatesMap::STATES_TOOLBARSTYLE},
            VisualPart{7, "DROPDOWNBUTTONGLYPH", VisualStatesMap::STATES_TOOLBARSTYLE},
        };

        inline static const QList<VisualPart> PARTS_TASKBARPEARL
        {
            VisualPart{0, "Common Properties", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{1, "PEARLICON", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{2, "TABLETMODEPEARLICON", VisualStatesMap::STATES_COMMON_DEFAULT},
        };

        inline static const QList<VisualPart> PARTS_TASKBARSHOWDESKTOP
        {
            VisualPart{0, "Common Properties", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{1, "SHOWDESKTOPTHEME", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{2, "DIVIDERLINE", VisualStatesMap::STATES_COMMON_DEFAULT},
        };

        inline static const QList<VisualPart> PARTS_TASKBAND
        {
            VisualPart{0, "Common Properties", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{1, "GROUPCOUNT", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{2, "FLASHBUTTON", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{3, "FLASHBUTTONGROUPMENU", VisualStatesMap::STATES_COMMON_DEFAULT},
        };

        inline static const QList<VisualPart> PARTS_TASKBAND2
        {
            VisualPart{0, "Common Properties", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{1, "BARTOP", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{2, "BARBOTTOM", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{3, "BARRIGHT", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{4, "BARLEFT", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{5, "TASKITEM", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{6, "TASKITEMLEFT", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{7, "TASKITEMCENTER", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{8, "TASKITEMRIGHT", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{9, "PROGRESSITEM", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{10, "PROGRESSITEMINDETERMINATE", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{11, "PROGRESSITEMERROR", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{12, "PROGRESSITEMPAUSED", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{13, "TASKITEMGROUP", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{14, "TASKITEMGROUPSELECTED", VisualStatesMap::STATES_COMMON_DEFAULT},
        };

        inline static const QList<VisualPart> PARTS_TASKBANDEXUI
        {
            VisualPart{0, "Common Properties", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{1, "BACKGROUND", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{2, "BACKGROUNDSHADOW", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{3, "THUMBRECT", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{4, "WINDOWTEXT", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{5, "SHADOW", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{6, "ACTIVERECT", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{7, "PREVACTIVERECT", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{8, "THUMBBARBUTTONSINGLE", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{9, "THUMBBARBUTTONLEFT", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{10, "THUMBBARBUTTONMIDDLE", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{11, "THUMBBARBUTTONRIGHT", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{12, "CLOSEBUTTON", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{13, "ARROWBUTTON", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{14, "THUMBSHADOWRIGHT", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{15, "THUMBSHADOWBOTTOM", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{16, "WINDOWBORDER", VisualStatesMap::STATES_COMMON_DEFAULT},
        };

        inline static const QList<VisualPart> PARTS_TASKMANAGER
        {
            VisualPart{0, "Common Properties", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{1, "ROW", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{2, "COLUMNDIVIDER", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{3, "HEATMAP_COLOR0", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{4, "HEATMAP_COLOR1", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{5, "HEATMAP_COLOR2", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{6, "HEATMAP_COLOR3", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{7, "HEATMAP_COLOR4", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{8, "HEATMAP_COLOR5", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{9, "HEATMAP_COLOR6", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{10, "HEATMAP_COLOR7", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{11, "HEATMAP_COLOR8", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{12, "HEATMAP_CONTENTIONMARKER", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{13, "HEATMAP_TEXT", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{14, "RESOURCE_TITLE", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{15, "RESOURCE_SUBTITLE", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{16, "GROUPLABEL", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{17, "STATICLABEL", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{18, "STATICDATA", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{19, "DYNAMICDATA", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{20, "MEMORYBAR_AVAILABLE", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{21, "MEMORYBAR_INUSE", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{22, "MEMORYBAR_MODIFIED", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{23, "MEMORYBAR_INUSE_SEPARATOR", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{24, "COLUMNHEADERTEXT", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{25, "CPU_HEATMAP_TEXT", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{26, "CPU_HEATMAP_COLOR0", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{27, "CPU_HEATMAP_COLOR1", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{28, "CPU_HEATMAP_COLOR2", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{29, "CPU_HEATMAP_COLOR3", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{30, "CPU_HEATMAP_COLOR4", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{31, "CPU_HEATMAP_COLOR5", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{32, "CPU_HEATMAP_PARKED0", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{33, "CPU_HEATMAP_PARKED1", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{34, "CPU_HEATMAP_PARKED2", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{35, "CPU_HEATMAP_PARKED3", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{36, "CPU_HEATMAP_PARKED4", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{37, "CPU_HEATMAP_PARKED5", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{38, "CPU_HEATMAP_GRID_BORDER", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{39, "CPU_HEATMAP_BLOCK_BORDER_R", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{40, "CPU_HEATMAP_BLOCK_BORDER_B", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{41, "COLHEADER_DIVIDER_COLOR1", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{42, "COLHEADER_DIVIDER_COLOR2", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{43, "CONTENTION_COLUMN_HEADER", VisualStatesMap::STATES_HEADEROVERFLOWSTATES}, // reuse
            VisualPart{44, "CHARTLEGEND", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{45, "COLUMNDIVIDERSELECTED", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{46, "COLUMNDIVIDERHOT", VisualStatesMap::STATES_COMMON_DEFAULT},
        };

        inline static const QList<VisualPart> PARTS_TEXTSELECTIONGRIPPER
        {
            VisualPart{0, "Common Properties", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{1, "GRIPPER", VisualStatesMap::STATES_COMMON_DEFAULT},
        };

        inline static const QList<VisualPart> PARTS_TEXTGLOW
        {
            VisualPart{0, "Common Properties", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{1, "BACKGROUND", VisualStatesMap::STATES_COMMON_DEFAULT},
        };

        inline static const QList<VisualPart> PARTS_TEXTSTYLE
        {
            VisualPart{0, "Common Properties", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{1, "MAININSTRUCTION", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{2, "INSTRUCTION", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{3, "BODYTITLE", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{4, "BODYTEXT", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{5, "SECONDARYTEXT", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{6, "HYPERLINKTEXT", VisualStatesMap::STATES_TEXTSTYLE_HLINK},
            VisualPart{7, "EXPANDED", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{8, "LABEL", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{9, "CONTROLLABEL", VisualStatesMap::STATES_TEXTSTYLE_CTRLLABEL},
        };

        inline static const QList<VisualPart> PARTS_TRAYNOTIFY
        {
            VisualPart{0, "Common Properties", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{1, "BACKGROUND", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{2, "ANIMBACKGROUND", VisualStatesMap::STATES_COMMON_DEFAULT},
        };

        inline static const QList<VisualPart> PARTS_TRYHARDER
        {
            VisualPart{0, "Common Properties", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{1, "BUTTON", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{2, "VERTICAL", VisualStatesMap::STATES_COMMON_DEFAULT},
        };

        inline static const QList<VisualPart> PARTS_SPIN
        {
            VisualPart{0, "Common Properties", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{1, "UP", VisualStatesMap::STATES_SPIN_GENERAL},
            VisualPart{2, "DOWN", VisualStatesMap::STATES_SPIN_GENERAL},
            VisualPart{3, "UPHORZ", VisualStatesMap::STATES_SPIN_GENERAL},
            VisualPart{4, "DOWNHORZ", VisualStatesMap::STATES_SPIN_GENERAL},
        };

        inline static const QList<VisualPart> PARTS_SEARCHBOX
        {
            VisualPart{0, "Common Properties", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{1, "BACKGROUND", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{2, "CLEARBUTTON", VisualStatesMap::STATES_PUSHBUTTON}, //W10
            VisualPart{3, "SEARCHBUTTON", VisualStatesMap::STATES_PUSHBUTTON}, //W10
        };

        inline static const QList<VisualPart> PARTS_SEARCHHOME
        {
            VisualPart{0, "Common Properties", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{1, "BACKGROUND", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{2, "LINE", VisualStatesMap::STATES_COMMON_DEFAULT},
        };

        inline static const QList<VisualPart> PARTS_SCROLLBAR
        {
            VisualPart{0, "Common Properties", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{1, "ARROWBTN", VisualStatesMap::STATES_SCROLLBAR_ARROWBTN},
            VisualPart{2, "THUMBBTNHORZ", VisualStatesMap::STATES_SCROLLBAR_STYLE},
            VisualPart{3, "THUMBBTNVERT", VisualStatesMap::STATES_SCROLLBAR_STYLE},
            VisualPart{4, "LOWERTRACKHORZ", VisualStatesMap::STATES_SCROLLBAR_STYLE},
            VisualPart{5, "UPPERTRACKHORZ", VisualStatesMap::STATES_SCROLLBAR_STYLE},
            VisualPart{6, "LOWERTRACKVERT", VisualStatesMap::STATES_SCROLLBAR_STYLE},
            VisualPart{7, "UPPERTRACKVERT", VisualStatesMap::STATES_SCROLLBAR_STYLE},
            VisualPart{8, "GRIPPERHORZ", VisualStatesMap::STATES_SCROLLBAR_STYLE},
            VisualPart{9, "GRIPPERVERT", VisualStatesMap::STATES_SCROLLBAR_STYLE},
            VisualPart{10, "SIZEBOX", VisualStatesMap::STATES_SCROLLBAR_SIZEBOX},
            VisualPart{11, "SIZEBOXBKGND", VisualStatesMap::STATES_COMMON_DEFAULT},
        };

        inline static const QList<VisualPart> PARTS_STATIC
        {
            VisualPart{0, "Common Properties", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{1, "TEXT", VisualStatesMap::STATES_COMMON_DEFAULT},
        };

        inline static const QList<VisualPart> PARTS_STATUS
        {
            VisualPart{0, "Common Properties", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{1, "PANE", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{2, "GRIPPERPANE", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{3, "GRIPPER", VisualStatesMap::STATES_COMMON_DEFAULT},
        };

        inline static const QList<VisualPart> PARTS_FLYOUT
        {
            VisualPart{0, "Common Properties", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{1, "HEADER", VisualStatesMap::STATES_FLYOUT_HEADER},
            VisualPart{2, "BODY", VisualStatesMap::STATES_FLYOUT_BODY},
            VisualPart{3, "LABEL", VisualStatesMap::STATES_FLYOUT_LABEL},
            VisualPart{4, "LINK", VisualStatesMap::STATES_FLYOUT_LINK},
            VisualPart{5, "DIVIDER", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{6, "WINDOW", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{7, "LINKAREA", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{8, "LINKHEADER", VisualStatesMap::STATES_FLYOUT_HEADER},
        };

        inline static const QList<VisualPart> PARTS_DRAGDROP
        {
            VisualPart{0, "Common Properties", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{1, "COPY", VisualStatesMap::STATES_DND_GENERAL},
            VisualPart{2, "MOVE", VisualStatesMap::STATES_DND_GENERAL},
            VisualPart{3, "UPDATEMETADATA", VisualStatesMap::STATES_DND_GENERAL},
            VisualPart{4, "CREATELINK", VisualStatesMap::STATES_DND_GENERAL},
            VisualPart{5, "WARNING", VisualStatesMap::STATES_DND_GENERAL},
            VisualPart{6, "NONE", VisualStatesMap::STATES_DND_GENERAL},
            VisualPart{7, "IMAGEBG", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{8, "TEXTBG", VisualStatesMap::STATES_COMMON_DEFAULT},
        };

        inline static const QList<VisualPart> PARTS_DATEPICKER
        {
            VisualPart{0, "Common Properties", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{1, "DATETEXT", VisualStatesMap::STATES_DATE_TEXT},
            VisualPart{2, "DATEBORDER", VisualStatesMap::STATES_DATE_BORDER},
            VisualPart{3, "SHOWCALENDARBUTTONRIGHT", VisualStatesMap::STATES_DATE_CALENDERBUTTONRIGHT},
        };

        inline static const QList<VisualPart> PARTS_TASKBAR
        {
            VisualPart{0, "Common Properties", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{1, "BACKGROUNDBOTTOM", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{2, "BACKGROUNDRIGHT", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{3, "BACKGROUNDTOP", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{4, "BACKGROUNDLEFT", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{5, "SIZINGBARBOTTOM", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{6, "SIZINGBARRIGHT", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{7, "SIZINGBARTOP", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{8, "SIZINGBARLEFT", VisualStatesMap::STATES_COMMON_DEFAULT},
        };

        inline static const QList<VisualPart> PARTS_STARTPANEL
        {
            VisualPart{0, "Common Properties", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{1, "USERPANE", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{2, "MOREPROGRAMS", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{3, "MOREPROGRAMSARROW", VisualStatesMap::STATES_SPP_MOREPROGRAMSARROW},
            VisualPart{4, "PROGRAMLIST", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{5, "PROGRAMLISTSEPARATOR", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{6, "PLACELIST", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{7, "PLACELISTSEPARATOR", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{8, "LOGOFF", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{9, "LOGOFFBUTTONS", VisualStatesMap::STATES_SPP_LOGOFFBUTTONS},
            VisualPart{10, "USERPICTURE", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{11, "PREVIEW", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{12, "MOREPROGRAMSTAB", VisualStatesMap::STATES_SPP_MOREPROGRAMSTAB},
            VisualPart{13, "NSCHOST", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{14, "SOFTWAREEXPLORER", VisualStatesMap::STATES_SPP_SOFTWAREEXPLORER},
            VisualPart{15, "OPENBOX", VisualStatesMap::STATES_SPP_OPENBOX},
            VisualPart{16, "SEARCHVIEW", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{17, "MOREPROGRAMSARROWBACK", VisualStatesMap::STATES_SPP_MOREPROGRAMSARROWBACK},
            VisualPart{18, "TOPMATCH", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{19, "LOGOFFSPLITBUTTONDROPDOWN", VisualStatesMap::STATES_SPP_LOGOFFSPLITBUTTONDROPDOWN},
        };

        inline static const QList<VisualPart> PARTS_STARTPANELPRIV
        {
            VisualPart{0, "Common Properties", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{1, "USERPANE", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{2, "MOREPROGRAMS", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{3, "MOREPROGRAMSDEST", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{4, "MOREPROGRAMSARROW", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{5, "FLYOUTARROW", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{6, "PROGRAMLIST", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{7, "PROGRAMLIST2", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{8, "PROGRAMLISTSEPARATOR", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{9, "PLACESLIST", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{10, "DESTLIST", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{11, "PLACESLISTSEPARATOR", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{12, "DESTINATIONMENUTOP", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{13, "DESTINATIONMENUBOTTOM", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{14, "LOGOFFBACKGROUND", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{15, "LOGOFFDESTBACKGROUND", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{16, "MOREPROGRAMSTAB", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{17, "NSCHOST", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{18, "OPENBOX", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{19, "OPENBOXDEST", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{20, "SEARCHVIEW", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{21, "MOREPROGRAMSARROWBACK", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{22, "TOPMATCH", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{23, "LOGOFFSPLITBUTTONDROPDOWN", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{24, "LOGOFFSPLITBUTTONDROPDOWNDEST", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{25, "PINICON", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{26, "SMALLPINOFFSET", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{27, "LARGEPINOFFSET", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{28, "LEFTMFUBUTTON", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{29, "FULLMFUBUTTON", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{30, "CENTERMFUBUTTON", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{31, "RIGHTMFUBUTTON", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{32, "FULLPLACESBUTTON", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{33, "LEFTPLACESBUTTON", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{34, "CENTERPLACESBUTTON", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{35, "RIGHTPLACESBUTTON", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{36, "SPECIALFOLDERSBUTTON", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{37, "LOGOFFSPLITBUTTON", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{38, "LOGOFFSPLITBUTTONDEST", VisualStatesMap::STATES_COMMON_DEFAULT},
        };

        inline static const QList<VisualPart> PARTS_MONTHCAL
        {
            VisualPart{0, "Common Properties", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{1, "BACKGROUND", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{2, "BORDERS", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{3, "GRIDBACKGROUND", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{4, "COLHEADERSPLITTER", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{5, "GRIDCELLBACKGROUND", VisualStatesMap::STATES_MONTHCAL_CELL},
            VisualPart{6, "GRIDCELL", VisualStatesMap::STATES_MONTHCAL_CELL},
            VisualPart{7, "GRIDCELLUPPER", VisualStatesMap::STATES_MONTHCAL_CELL},
            VisualPart{8, "TRAILINGGRIDCELL", VisualStatesMap::STATES_MONTHCAL_CELL},
            VisualPart{9, "TRAILINGGRIDCELLUPPER", VisualStatesMap::STATES_MONTHCAL_CELL},
            VisualPart{10, "NAVNEXT", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{11, "NAVPREV", VisualStatesMap::STATES_COMMON_DEFAULT},
        };

        inline static const QList<VisualPart> PARTS_USERTILE
        {
            VisualPart{0, "Common Properties", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{1, "STROKEBACKGROUND", VisualStatesMap::STATES_COMMON_DEFAULT},
            VisualPart{2, "HOVERBACKGROUND", VisualStatesMap::STATES_COMMON_DEFAULT},
        };

        inline static const QList<VisualPart> find(QString className, Style::Version version)
        {
            //
            // TODO: Use base class map (BCMAP) instead of relying on the naming
            //

            if(className.contains("Toolbar"))   // Toolbar is often inherited, so find it first. It also has to be caught before "Button",
            {                                   // because otherwise the SearchButton::Toolbar class would use the Button parts instead of the toolbar ones.
                return VisualPartsMap::PARTS_TOOLBAR;
            }
            else if(className.contains("::Header")) // match inherited..
            {
                return VisualPartsMap::PARTS_HEADER;
            }
            else if(className.contains("Button"))
            {
                return VisualPartsMap::PARTS_BUTTON;
            }
            else if(className.contains("Edit"))
            {
                return VisualPartsMap::PARTS_EDIT;
            }
            else if(className.contains("AddressBand"))
            {
                return VisualPartsMap::PARTS_ADDRESSBAND;
            }
            else if(className.contains("BarrierPage"))
            {
                return VisualPartsMap::PARTS_BARRIERPAGE;
            }
            else if(className.contains("BreadcrumbBar"))
            {
                return VisualPartsMap::PARTS_BREADCRUMBBAR;
            }
            else if(className.contains("ReadingPane"))
            {
                return VisualPartsMap::PARTS_READINGPANE;
            }
            else if(className.contains("Rebar"))
            {
                return VisualPartsMap::PARTS_REBAR;
            }
            else if(className.contains("::Clock"))
            {
                return VisualPartsMap::PARTS_CLOCK;
            }
            else if(className.contains("ChartView"))
            {
                return VisualPartsMap::PARTS_CHARTVIEW;
            }
            else if(className.contains("CommandModule"))
            {
                switch(version)
                {
                    case Style::WindowsVista:
                    {
                        return VisualPartsMap::PARTS_COMMANDMODULE_WINVista;
                    }
                    case Style::Windows7:
                    {
                        return VisualPartsMap::PARTS_COMMANDMODULE_WIN7;
                    }
                    case Style::Windows8:
                    case Style::Windows10:
                    case Style::Windows11:
                    {
                        return VisualPartsMap::PARTS_COMMANDMODULE_WIN8;
                    }
                    default:
                    {
                        return VisualPartsMap::PARTS_COMMANDMODULE_WIN8;
                    }
                }
            }
            else if(className.contains("CommunicationsStyle"))
            {
                return VisualPartsMap::PARTS_COMMUNICATIONS;
            }
            else if(className.contains("Combobox") || className.contains("ComboBox"))
            {
                return VisualPartsMap::PARTS_COMBOBOX;
            }
            else if(className.contains("ControlPanel"))
            {
                return VisualPartsMap::PARTS_CONTROLPANEL;
            }
            else if(className.contains("CopyClose"))
            {
                return VisualPartsMap::PARTS_COPYCLOSE;
            }
            else if(className.contains("DropListControl"))
            {
                return VisualPartsMap::PARTS_DROPLIST;
            }
            else if(className.contains("EmptyMarkup"))
            {
                return VisualPartsMap::PARTS_EMPTYMARKUP;
            }
            else if(className.contains("ExplorerBar"))
            {
                return VisualPartsMap::PARTS_EXPLORERBAR;
            }
            else if(className.contains("Listbox"))
            {
                return VisualPartsMap::PARTS_LISTBOX;
            }
            else if(className.contains("ListView"))
            {
                return VisualPartsMap::PARTS_LISTVIEW;
            }
            else if(className.contains("InfoBar"))
            {
                return VisualPartsMap::PARTS_INFOBAR;
            }
            else if(className.contains("ItemsView")) // after listview since it inherits..
            {
                return VisualPartsMap::PARTS_ITEMSVIEW;
            }
            else if(className.contains("Link"))
            {
                return VisualPartsMap::PARTS_LINK;
            }
            else if(className.contains("MenuBand"))
            {
                return VisualPartsMap::PARTS_MENUBAND;
            }
            else if(className.contains("Menu"))
            {
                return VisualPartsMap::PARTS_MENU;
            }
            else if(className.contains("Navigation"))
            {
                return VisualPartsMap::PARTS_NAVIGATION;
            }
            else if(className.contains("TreeView"))
            {
                return VisualPartsMap::PARTS_TREEVIEW;
            }
            else if(className.contains("DWMPen"))
            {
                return VisualPartsMap::PARTS_DWMPEN;
            }
            else if(className.contains("DWMTouch"))
            {
                return VisualPartsMap::PARTS_DWMTOUCH;
            }
            else if(className.contains("DWMWindow"))
            {
                switch(version)
                {
                    case Style::Windows7:
                    {
                        return VisualPartsMap::PARTS_DWMWINDOW_WIN7;
                    }
                    case Style::Windows8:
                    {
                        return VisualPartsMap::PARTS_DWMWINDOW_WIN81;
                    }
                    case Style::Windows10:
                    case Style::Windows11:
                    {
                        return VisualPartsMap::PARTS_DWMWINDOW_WIN10;
                    }
                    default:
                    {
                        return VisualPartsMap::PARTS_DWMWINDOW_WIN10;
                    }
                }
            }
            else if(className.contains("Window"))
            {
                return VisualPartsMap::PARTS_WINDOW;
            }
            else if(className.contains("TaskDialog"))
            {
                return VisualPartsMap::PARTS_TASKDIALOG;
            }
            else if(className.contains("Header"))
            {
                return VisualPartsMap::PARTS_HEADER;
            }
            else if(className.contains("AeroWizard"))
            {
                return VisualPartsMap::PARTS_AEROWIZARD;
            }
            else if(className.contains("Page"))
            {
                return VisualPartsMap::PARTS_PAGE;
            }
            else if(className.contains("Pause"))
            {
                return VisualPartsMap::PARTS_PAUSE;
            }
            else if(className.contains("Progress"))
            {
                return VisualPartsMap::PARTS_PROGRESS;
            }
            else if(className.contains("ProperTree"))
            {
                return VisualPartsMap::PARTS_PROPERTREE;
            }
            else if(className.contains("PreviewPane"))
            {
                return VisualPartsMap::PARTS_PREVIEWPANE;
            }
            else if(className.contains("TrackBar"))
            {
                return VisualPartsMap::PARTS_TRACKBAR;
            }
            else if(className.contains("Tab"))
            {
                return VisualPartsMap::PARTS_TAB;
            }
            else if(className.contains("ToolTip") || className.contains("Tooltip")) // overcome inconsistencies in the naming
            {
                return VisualPartsMap::PARTS_TOOLTIP;
            }
            else if(className.contains("TaskBar"))
            {
                return VisualPartsMap::PARTS_TASKBAR;
            }
            else if(className.contains("TextGlow"))
            {
                return VisualPartsMap::PARTS_TEXTGLOW;
            }
            else if(className.contains("TextStyle"))
            {
                return VisualPartsMap::PARTS_TEXTSTYLE;
            }
            else if(className.contains("TextSelectionGripper"))
            {
                return VisualPartsMap::PARTS_TEXTSELECTIONGRIPPER;
            }
            else if(className.contains("::TrayNotify"))
            {
                return VisualPartsMap::PARTS_TRAYNOTIFY;
            }
            else if(className.contains("TryHarder"))
            {
                return VisualPartsMap::PARTS_TRYHARDER;
            }
            else if(className.contains("SearchBox") || className.contains("Searchbox")) // matches HelpSearchBox as well, thats ok
            {
                return VisualPartsMap::PARTS_SEARCHBOX;
            }
            else if(className.contains("SearchHome"))
            {
                return VisualPartsMap::PARTS_SEARCHHOME;
            }
            else if(className.contains("Spin"))
            {
                return VisualPartsMap::PARTS_SPIN;
            }
            else if(className.contains("ScrollBar") || className.contains("Scrollbar")) // overcome inconsistencies in the naming
            {
                return VisualPartsMap::PARTS_SCROLLBAR;
            }
            else if(className.contains("Static"))
            {
                return VisualPartsMap::PARTS_STATIC;
            }
            else if(className.contains("Status"))
            {
                return VisualPartsMap::PARTS_STATUS;
            }
            else if(className.contains("TaskbarPearl"))
            {
                return VisualPartsMap::PARTS_TASKBARPEARL;
            }
            else if(className.contains("TaskbarShowDesktop"))
            {
                return VisualPartsMap::PARTS_TASKBARSHOWDESKTOP;
            }
            else if(className.contains("TaskbandExtendedUI"))
            {
                return VisualPartsMap::PARTS_TASKBANDEXUI;
            }
            else if(className.contains("TaskBand2"))
            {
                return VisualPartsMap::PARTS_TASKBAND2;
            }
            else if(className.contains("TaskBand"))
            {
                return VisualPartsMap::PARTS_TASKBAND;
            }
            else if(className.contains("TaskManager"))
            {
                return VisualPartsMap::PARTS_TASKMANAGER;
            }
            else if(className.contains("Flyout"))
            {
                return VisualPartsMap::PARTS_FLYOUT;
            }
            else if(className.contains("DragDrop"))
            {
                return VisualPartsMap::PARTS_DRAGDROP;
            }
            else if(className.contains("DatePicker"))
            {
                return VisualPartsMap::PARTS_DATEPICKER;
            }
            else if(className.contains("StartPanelPriv"))
            {
                return VisualPartsMap::PARTS_STARTPANELPRIV;
            }
            else if(className.contains("StartPanel"))
            {
                return VisualPartsMap::PARTS_STARTPANEL;
            }
            else if(className.contains("MonthCal"))
            {
                return VisualPartsMap::PARTS_MONTHCAL;
            }
            else if(className.contains("UserTile"))
            {
                return VisualPartsMap::PARTS_USERTILE;
            }
            else
            {
                return QList<VisualPart>{};
            }
        }
};

}

#endif // VISUALPARTSMAP_H
