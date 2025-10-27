#ifndef VISUALSTATESMAP_H
#define VISUALSTATESMAP_H

#include <QList>

namespace Style
{

struct VisualState
{
        int value;
        QString name;
};

class VisualStatesMap
{
public:
        inline static const QList<VisualState> STATES_COMMON_DEFAULT
        {
            VisualState{0, "Common"},
        };

        inline static const QList<VisualState> STATES_AEROWIZARD_HEADERAREA
        {
            VisualState{0, "Common"},
            VisualState{1, "NOMARGIN"},
        };

        inline static const QList<VisualState> STATES_PUSHBUTTON
        {
            VisualState{0, "Common"},
            VisualState{1, "NORMAL"},
            VisualState{2, "HOT"},
            VisualState{3, "PRESSED"},
            VisualState{4, "DISABLED"},
            VisualState{5, "DEFAULTED"},
            VisualState{6, "DEFAULTED_ANIMATING"}
        };

        inline static const QList<VisualState> STATES_RADIOBUTTON
        {
            VisualState{0, "Common"},
            VisualState{1, "UNCHECKEDNORMAL"},
            VisualState{2, "UNCHECKEDHOT"},
            VisualState{3, "UNCHECKEDPRESSED"},
            VisualState{4, "UNCHECKEDDISABLED"},
            VisualState{5, "CHECKEDNORMAL"},
            VisualState{6, "CHECKEDHOT"},
            VisualState{7, "CHECKEDPRESSED"},
            VisualState{8, "CHECKEDDISABLED"},
        };

        inline static const QList<VisualState> STATES_CHARTVIEW_LINE
        {
            VisualState{0, "Common"},
            VisualState{1, "ACTIVE"},
            VisualState{2, "IDLE"},
            VisualState{3, "ERROR"},
        };

        inline static const QList<VisualState> STATES_CHECKBOX
        {
            VisualState{0, "Common"},
            VisualState{1, "UNCHECKEDNORMAL"},
            VisualState{2, "UNCHECKEDHOT"},
            VisualState{3, "UNCHECKEDPRESSED"},
            VisualState{4, "UNCHECKEDDISABLED"},
            VisualState{5, "CHECKEDNORMAL"},
            VisualState{6, "CHECKEDHOT"},
            VisualState{7, "CHECKEDPRESSED"},
            VisualState{8, "CHECKEDDISABLED"},
            VisualState{9, "MIXEDNORMAL"},
            VisualState{10, "MIXEDHOT"},
            VisualState{11, "MIXEDPRESSED"},
            VisualState{12, "MIXEDDISABLED"},
            VisualState{13, "IMPLICITNORMAL"},
            VisualState{14, "IMPLICITHOT"},
            VisualState{15, "IMPLICITPRESSED"},
            VisualState{16, "IMPLICITDISABLED"},
            VisualState{17, "EXCLUDEDNORMAL"},
            VisualState{18, "EXCLUDEDHOT"},
            VisualState{19, "EXCLUDEDPRESSED"},
            VisualState{20, "EXCLUDEDDISABLED"},
        };

        inline static const QList<VisualState> STATES_GROUPBOX
        {
            VisualState{0, "Common"},
            VisualState{1, "NORMAL"},
            VisualState{2, "DISABLED"},
        };

        inline static const QList<VisualState> STATES_COMMANDLINK
        {
            VisualState{0, "Common"},
            VisualState{1, "NORMAL"},
            VisualState{2, "HOT"},
            VisualState{3, "PRESSED"},
            VisualState{4, "DISABLED"},
            VisualState{5, "DEFAULTED"},
            VisualState{6, "DEFAULTED_ANIMATING"}
        };

        inline static const QList<VisualState> STATES_COMMANDLINKGLYPHS
        {
            VisualState{0, "Common"},
            VisualState{1, "NORMAL"},
            VisualState{2, "HOT"},
            VisualState{3, "PRESSED"},
            VisualState{4, "DISABLED"},
            VisualState{5, "DEFAULTED"},
        };

        inline static const QList<VisualState> STATES_PUSHBUTTONDROPDOWN
        {
            VisualState{0, "Common"},
            VisualState{1, "NORMAL"},
            VisualState{2, "DISABLED"},
        };

        inline static const QList<VisualState> STATES_TIME
        {
            VisualState{0, "Common"},
            VisualState{1, "NORMAL"},
            VisualState{2, "HOT"},
            VisualState{3, "PRESSED"},
        };

        inline static const QList<VisualState> STATES_COMMANDMODULE_SPLITBUTTON
        {
            VisualState{0, "Common"},
            VisualState{1, "NORMAL"},
            VisualState{2, "HOT"},
            VisualState{3, "PRESSED"},
            VisualState{4, "KEYFOCUSED"},
            VisualState{5, "NEARHOT"},
            VisualState{6, "DISABLED"}
        };

        inline static const QList<VisualState> STATES_COMMANDMODULE_LIBRARYPANE_GEN
        {
            VisualState{0, "Common"},
            VisualState{1, "NORMAL"},
            VisualState{2, "HOT"}
        };

        inline static const QList<VisualState> STATES_CONTROLPANEL_CONTENTPANE
        {
            VisualState{0, "Common"},
            VisualState{1, "STANDALONE"},
        };

        inline static const QList<VisualState> STATES_COPYCLOSEBTN
        {
            VisualState{0, "Common"},
            VisualState{1, "NORMAL"},
            VisualState{2, "HOT"},
            VisualState{3, "PRESSED"},
            VisualState{4, "DISABLEDPRESSED"},
            VisualState{5, "DISABLED"},
        };

        inline static const QList<VisualState> STATES_CB_STYLE
        {
            VisualState{0, "Common"},
            VisualState{1, "NORMAL"},
            VisualState{2, "HOT"},
            VisualState{3, "PRESSED"},
            VisualState{4, "DISABLED"},
        };

        inline static const QList<VisualState> STATES_CB_DROPDOWNLR
        {
            VisualState{0, "Common"},
            VisualState{1, "NORMAL"},
            VisualState{2, "HOT"},
            VisualState{3, "PRESSED"},
            VisualState{4, "DISABLED"},
        };

        inline static const QList<VisualState> STATES_CB_TRANSPARENTBG
        {
            VisualState{0, "Common"},
            VisualState{1, "NORMAL"},
            VisualState{2, "HOT"},
            VisualState{3, "DISABLED"},
            VisualState{4, "FOCUSED"},
        };

        inline static const QList<VisualState> STATES_CB_BORDER
        {
            VisualState{0, "Common"},
            VisualState{1, "NORMAL"},
            VisualState{2, "HOT"},
            VisualState{3, "FOCUSED"},
            VisualState{4, "DISABLED"},
        };

        inline static const QList<VisualState> STATES_CB_READONLY
        {
            VisualState{0, "Common"},
            VisualState{1, "NORMAL"},
            VisualState{2, "HOT"},
            VisualState{3, "PRESSED"},
            VisualState{4, "DISABLED"},
        };

        inline static const QList<VisualState> STATES_CB_CUEBANNER
        {
            VisualState{0, "Common"},
            VisualState{1, "NORMAL"},
            VisualState{2, "HOT"},
            VisualState{3, "PRESSED"},
            VisualState{4, "DISABLED"},
        };

        inline static const QList<VisualState> STATES_CP_DROPDOWNITEM
        {
            VisualState{0, "Common"},
            VisualState{1, "NORMAL"},
            VisualState{2, "HIGHLIGHTED"},
        };

        inline static const QList<VisualState> STATES_TAB
        {
            VisualState{0, "Common"},
            VisualState{1, "NORMAL"},
            VisualState{2, "HOT"},
            VisualState{3, "SELECTED"},
        };

        inline static const QList<VisualState> STATES_LINK_HELP
        {
            VisualState{0, "Common"},
            VisualState{1, "NORMAL"},
            VisualState{2, "HOT"},
            VisualState{3, "PRESSED"},
            VisualState{4, "DISABLED"},

        };

        inline static const QList<VisualState> STATES_LINK_TASK
        {
            VisualState{0, "Common"},
            VisualState{1, "NORMAL"},
            VisualState{2, "HOT"},
            VisualState{3, "PRESSED"},
            VisualState{4, "DISABLED"},
            VisualState{5, "PAGE"},
        };

        inline static const QList<VisualState> STATES_LINK_CONTENT
        {
            VisualState{0, "Common"},
            VisualState{1, "NORMAL"},
            VisualState{2, "HOT"},
            VisualState{3, "PRESSED"},
            VisualState{4, "DISABLED"},
        };

        inline static const QList<VisualState> STATES_LINK_SECTIONTITLE
        {
            VisualState{0, "Common"},
            VisualState{1, "NORMAL"},
            VisualState{2, "HOT"},
        };

        inline static const QList<VisualState> STATES_DATE_TEXT
        {
            VisualState{0, "Common"},
            VisualState{1, "NORMAL"},
            VisualState{2, "DISABLED"},
            VisualState{3, "SELECTED"},
        };

        inline static const QList<VisualState> STATES_DATE_BORDER
        {
            VisualState{0, "Common"},
            VisualState{1, "NORMAL"},
            VisualState{2, "HOT"},
            VisualState{3, "FOCUSED"},
            VisualState{4, "DISABLED"},
        };

        inline static const QList<VisualState> STATES_DATE_CALENDERBUTTONRIGHT
        {
            VisualState{0, "Common"},
            VisualState{1, "NORMAL"},
            VisualState{2, "HOT"},
            VisualState{3, "PRESSED"},
            VisualState{4, "DISABLED"},
        };

        inline static const QList<VisualState> STATES_DND_GENERAL
        {
            VisualState{0, "Common"},
            VisualState{1, "HIGHLIGHT"},
            VisualState{2, "NOHIGHLIGHT"},
        };

        inline static const QList<VisualState> STATES_EDITTEXT
        {
            VisualState{0, "Common"},
            VisualState{1, "NORMAL"},
            VisualState{2, "HOT"},
            VisualState{3, "SELECTED"},
            VisualState{4, "DISABLED"},
            VisualState{5, "FOCUSED"},
            VisualState{6, "READONLY"},
            VisualState{7, "ASSIST"},
            VisualState{8, "CUEBANNER"},
        };

        inline static const QList<VisualState> STATES_EDITTEXT_BG
        {
            VisualState{0, "Common"},
            VisualState{1, "NORMAL"},
            VisualState{2, "HOT"},
            VisualState{3, "DISABLED"},
            VisualState{4, "FOCUSED"},
            VisualState{5, "READONLY"},
            VisualState{6, "ASSIST"},

        };

        inline static const QList<VisualState> STATES_EDITTEXT_BGWITHBORDER
        {
            VisualState{0, "Common"},
            VisualState{1, "NORMAL"},
            VisualState{2, "HOT"},
            VisualState{3, "DISABLED"},
            VisualState{4, "FOCUSED"},
        };

        inline static const QList<VisualState> STATES_EDITTEXT_GENERAL
        {
            VisualState{0, "Common"},
            VisualState{1, "NORMAL"},
            VisualState{2, "HOT"},
            VisualState{3, "FOCUSED"},
            VisualState{4, "DISABLED"},
        };

        inline static const QList<VisualState> STATES_EXPLORERBAR_HDRPIN
        {
            VisualState{0, "Common"},
            VisualState{1, "NORMAL"},
            VisualState{2, "HOT"},
            VisualState{3, "PRESSED"},
            VisualState{4, "SELECTEDNORMAL"},
            VisualState{5, "SELECTEDHOT"},
            VisualState{6, "SELECTEDPRESSED"},
        };

        inline static const QList<VisualState> STATES_EXPLORERBAR_GENERAL
        {
            VisualState{0, "Common"},
            VisualState{1, "NORMAL"},
            VisualState{2, "HOT"},
            VisualState{3, "PRESSED"},
        };

        inline static const QList<VisualState> STATES_FLYOUT_LABEL
        {
            VisualState{0, "Common"},
            VisualState{1, "NORMAL"},
            VisualState{2, "SELECTED"},
            VisualState{3, "EMPHASIZED"},
            VisualState{4, "DISABLED"},
        };

        inline static const QList<VisualState> STATES_FLYOUT_LINK
        {
            VisualState{0, "Common"},
            VisualState{1, "NORMAL"},
            VisualState{2, "HOVER"},
        };

        inline static const QList<VisualState> STATES_FLYOUT_BODY
        {
            VisualState{0, "Common"},
            VisualState{1, "NORMAL"},
            VisualState{2, "EMPHASIZED"},
        };

        inline static const QList<VisualState> STATES_FLYOUT_HEADER
        {
            VisualState{0, "Common"},
            VisualState{1, "NORMAL"},
            VisualState{2, "HOVER"},
        };

        inline static const QList<VisualState> STATES_HEADER_ITEMSTATES
        {
            VisualState{0, "Common"},
            VisualState{1, "NORMAL"},
            VisualState{2, "HOT"},
            VisualState{3, "PRESSED"},
            VisualState{4, "SORTEDNORMAL"},
            VisualState{5, "SORTEDHOT"},
            VisualState{6, "SORTEDPRESSED"},
            VisualState{7, "ICONNORMAL"},
            VisualState{8, "ICONHOT"},
            VisualState{9, "ICONPRESSED"},
            VisualState{10, "ICONSORTEDNORMAL"},
            VisualState{11, "ICONSORTEDHOT"},
            VisualState{12, "ICONSORTEDPRESSED"},
        };

        inline static const QList<VisualState> STATES_HEADER_LEFT_AND_RIGHT
        {
            VisualState{0, "Common"},
            VisualState{1, "NORMAL"},
            VisualState{2, "HOT"},
            VisualState{3, "PRESSED"},
        };

        inline static const QList<VisualState> STATES_HEADERSORTARROWSTATES
        {
            VisualState{0, "Common"},
            VisualState{1, "SORTEDUP"},
            VisualState{2, "SORTEDDOWN"},
        };

        inline static const QList<VisualState> STATES_HEADERDROPDOWNSTATES
        {
            VisualState{0, "Common"},
            VisualState{1, "NORMAL"},
            VisualState{2, "SOFTHOT"},
            VisualState{3, "HOT"},

        };

        inline static const QList<VisualState> STATES_HEADERDROPDOWNFILTERSTATES
        {
            VisualState{0, "Common"},
            VisualState{1, "NORMAL"},
            VisualState{2, "SOFTHOT"},
            VisualState{3, "HOT"},
        };

        inline static const QList<VisualState> STATES_HEADEROVERFLOWSTATES
        {
            VisualState{0, "Common"},
            VisualState{1, "NORMAL"},
            VisualState{2, "HOT"},
        };

        inline static const QList<VisualState> STATES_ITEMSVIEW_SEARCHHIT
        {
            VisualState{0, "Common"},
            VisualState{1, "START"},
            VisualState{2, "FINAL"},
            VisualState{3, "STARTSELECTED"},
            VisualState{4, "FINALSELECTED"},
        };

        inline static const QList<VisualState> STATES_ITEMSVIEW_FOCUSRECT
        {
            VisualState{0, "Common"},
            VisualState{1, "NORMAL"},
            VisualState{2, "HOVER"},
        };

        inline static const QList<VisualState> STATES_ITEMSVIEW_PROPERTY
        {
            VisualState{0, "Common"},
            VisualState{1, "SUBPROPERTY"},
            VisualState{2, "FILENAMEPROPERTY"},
            VisualState{3, "FILENAMESELECTEDPROPERTY"},
            VisualState{4, "SUBPROPERTYSELECTED"},
            VisualState{5, "FILENAMECOMPRESSEDPROPERTY"},
            VisualState{6, "FILENAMESELECTEDCOMPRESSEDPROPERTY"},
            VisualState{7, "FILENAMEENCRYPTEDPROPERTY"},
            VisualState{8, "FILENAMESELECTEDENCRYPTEDPROPERTY"},
            VisualState{9, "FILENAMEDISCONNECTEDPROPERTY"},
            VisualState{10, "FILENAMESELECTEDDISCONNECTEDPROPERTY"},
            VisualState{11, "CONFLICTTILETEXT"},
            VisualState{12, "CONFLICTTILETEXTFOCUSED"},
            VisualState{13, "PROGRESSBAR"},
        };

        inline static const QList<VisualState> STATES_LISTBOX_SCROLL
        {
            VisualState{0, "Common"},
            VisualState{1, "NORMAL"},
            VisualState{2, "FOCUSED"},
            VisualState{3, "HOT"},
            VisualState{4, "DISABLED"},
        };

        inline static const QList<VisualState> STATES_LISTBOX_ITEMS
        {
            VisualState{0, "Common"},
            VisualState{1, "HOT"},
            VisualState{2, "HOTSELECTED"},
            VisualState{3, "SELECTED"},
            VisualState{4, "SELECTEDNOTFOCUS"},
        };

        inline static const QList<VisualState> STATES_LISTVIEW_ITEMS
        {
            VisualState{0, "Common"},
            VisualState{1, "NORMAL"},
            VisualState{2, "HOT"},
            VisualState{3, "SELECTED"},
            VisualState{4, "DISABLED"},
            VisualState{5, "SELECTEDNOTFOCUS"},
            VisualState{6, "HOTSELECTED"},
        };

        inline static const QList<VisualState> STATES_LISTVIEW_GROUPHEADER_GENERAL
        {
            VisualState{0, "Common"},
            VisualState{1, "OPEN"},
            VisualState{2, "OPENHOT"},
            VisualState{3, "OPENSELECTED"},
            VisualState{4, "OPENSELECTEDHOT"},
            VisualState{5, "OPENSELECTEDNOTFOCUSED"},
            VisualState{6, "OPENSELECTEDNOTFOCUSEDHOT"},
            VisualState{7, "OPENMIXEDSELECTION"},
            VisualState{8, "OPENMIXEDSELECTIONHOT"},
            VisualState{9, "CLOSE"},
            VisualState{10, "CLOSEHOT"},
            VisualState{11, "CLOSESELECTED"},
            VisualState{12, "CLOSESELECTEDHOT"},
            VisualState{13, "CLOSESELECTEDNOTFOCUSED"},
            VisualState{14, "CLOSESELECTEDNOTFOCUSEDHOT"},
            VisualState{15, "CLOSEMIXEDSELECTION"},
            VisualState{16, "CLOSEMIXEDSELECTIONHOT"},
        };

        inline static const QList<VisualState> STATES_LISTVIEW_EXPCOLLAPSE
        {
            VisualState{0, "Common"},
            VisualState{1, "NORMAL"},
            VisualState{2, "HOVER"},
            VisualState{3, "PUSHED"},
        };

        inline static const QList<VisualState> STATES_MENU_BARBG
        {
            VisualState{0, "Common"},
            VisualState{1, "ACTIVE"},
            VisualState{2, "INACTIVE"},
        };

        inline static const QList<VisualState> STATES_MENU_BARITEM
        {
            VisualState{0, "Common"},
            VisualState{1, "NORMAL"},
            VisualState{2, "HOT"},
            VisualState{3, "PUSHED"},
            VisualState{4, "DISABLED"},
            VisualState{5, "DISABLEDHOT"},
            VisualState{6, "DISABLEDPUSHED"},
        };

        inline static const QList<VisualState> STATES_MENU_BARBACKGROUND
        {
            VisualState{0, "Common"},
            VisualState{1, "ACTIVE"},
            VisualState{2, "INACTIVE"},
        };

        inline static const QList<VisualState> STATES_MENU_POPCHECK
        {
            VisualState{0, "Common"},
            VisualState{1, "CHECKMARKNORMAL"},
            VisualState{2, "CHECKMARKDISABLED"},
            VisualState{3, "BULLETNORMAL"},
            VisualState{4, "BULLETDISABLED"},
        };

        inline static const QList<VisualState> STATES_MENU_POPCHECKBG
        {
            VisualState{0, "Common"},
            VisualState{1, "DISABLED"},
            VisualState{2, "NORMAL"},
            VisualState{3, "BITMAP"},
        };

        inline static const QList<VisualState> STATES_MENU_POPITEMS
        {
            VisualState{0, "Common"},
            VisualState{1, "NORMAL"},
            VisualState{2, "HOT"},
            VisualState{3, "DISABLED"},
            VisualState{4, "DISABLEDHOT"},
        };

        inline static const QList<VisualState> STATES_MENU_SYSTEM_GENERAL
        {
            VisualState{0, "Common"},
            VisualState{1, "NORMAL"},
            VisualState{2, "DISABLED"},
        };

        inline static const QList<VisualState> STATES_MDP_NEWAPPBUTTON
        {
            VisualState{0, "Common"},
            VisualState{1, "NORMAL"},
            VisualState{2, "HOT"},
            VisualState{3, "PRESSED"},
            VisualState{4, "DISABLED"},
            VisualState{5, "CHECKED"},
            VisualState{6, "HOTCHECKED"},
        };

        inline static const QList<VisualState> STATES_MONTHCAL_CELL
        {
            VisualState{0, "Common"},
            VisualState{1, "HOT"},
            VisualState{2, "HASSTATE"},
            VisualState{3, "HASSTATEHOT"},
            VisualState{4, "TODAY"},
            VisualState{5, "TODAYSELECTED"},
            VisualState{6, "SELECTED"},
            VisualState{7, "SELECTEDHOT"},
        };

        inline static const QList<VisualState> STATES_GENERAL
        {
            VisualState{0, "Common"},
            VisualState{1, "BB_NORMAL"},
            VisualState{2, "BB_HOT"},
            VisualState{3, "BB_PRESSED"},
            VisualState{4, "BB_DISABLED"},
        };

        inline static const QList<VisualState> STATES_PAGE_GENERAL
        {
            VisualState{0, "Common"},
            VisualState{1, "NORMAL"},
            VisualState{2, "HOT"},
            VisualState{3, "PRESSED"},
            VisualState{4, "DISABLED"},
        };

        inline static const QList<VisualState> STATES_PROGRESS_TRANSPARENT_GENERAL
        {
            VisualState{0, "Common"},
            VisualState{1, "NORMAL"},
            VisualState{2, "PARTIAL"},
        };

        inline static const QList<VisualState> STATES_PROGRESS_FILL_GENERAL
        {
            VisualState{0, "Common"},
            VisualState{1, "NORMAL"},
            VisualState{2, "ERROR"},
            VisualState{3, "PAUSED"},
            VisualState{4, "PARTIAL"},
        };

        inline static const QList<VisualState> STATES_REBAR_GENERAL
        {
            VisualState{0, "Common"},
            VisualState{1, "NORMAL"},
            VisualState{2, "HOT"},
            VisualState{3, "PRESSED"},
        };

        inline static const QList<VisualState> STATES_SCROLLBAR_ARROWBTN
        {
            VisualState{0, "Common"},
            VisualState{1, "UPNORMAL"},
            VisualState{2, "UPHOT"},
            VisualState{3, "UPPRESSED"},
            VisualState{4, "UPDISABLED"},
            VisualState{5, "DOWNNORMAL"},
            VisualState{6, "DOWNHOT"},
            VisualState{7, "DOWNPRESSED"},
            VisualState{8, "DOWNDISABLED"},
            VisualState{9, "LEFTNORMAL"},
            VisualState{10, "LEFTHOT"},
            VisualState{11, "LEFTPRESSED"},
            VisualState{12, "LEFTDISABLED"},
            VisualState{13, "RIGHTNORMAL"},
            VisualState{14, "RIGHTHOT"},
            VisualState{15, "RIGHTPRESSED"},
            VisualState{16, "RIGHTDISABLED"},
            VisualState{17, "UPHOVER"},
            VisualState{18, "DOWNHOVER"},
            VisualState{19, "LEFTHOVER"},
            VisualState{20, "RIGHTHOVER"},

        };

        inline static const QList<VisualState> STATES_SCROLLBAR_STYLE
        {
            VisualState{0, "Common"},
            VisualState{1, "NORMAL"},
            VisualState{2, "HOT"},
            VisualState{3, "PRESSED"},
            VisualState{4, "DISABLED"},
            VisualState{5, "HOVER"},
        };

        inline static const QList<VisualState> STATES_SCROLLBAR_SIZEBOX
        {
            VisualState{0, "Common"},
            VisualState{1, "RIGHTALIGN"},
            VisualState{2, "LEFTALIGN"},
            VisualState{3, "TOPRIGHTALIGN"},
            VisualState{4, "TOPLEFTALIGN"},
            VisualState{5, "HALFBOTTOMRIGHTALIGN"},
            VisualState{6, "HALFBOTTOMLEFTALIGN"},
            VisualState{7, "HALFTOPRIGHTALIGN"},
            VisualState{8, "HALFTOPLEFTALIGN"},
        };

        inline static const QList<VisualState> STATES_SPIN_GENERAL
        {
            VisualState{0, "Common"},
            VisualState{1, "NORMAL"},
            VisualState{2, "HOT"},
            VisualState{3, "PRESSED"},
            VisualState{4, "DISABLED"},
        };

        inline static const QList<VisualState> STATES_SPP_MOREPROGRAMSARROW
        {
            VisualState{0, "Common"},
            VisualState{1, "NORMAL"},
            VisualState{2, "HOT"},
            VisualState{3, "PRESSED"},
        };

        inline static const QList<VisualState> STATES_SPP_LOGOFFBUTTONS
        {
            VisualState{0, "Common"},
            VisualState{1, "NORMAL"},
            VisualState{2, "HOT"},
            VisualState{3, "PRESSED"},
        };

        inline static const QList<VisualState> STATES_SPP_MOREPROGRAMSTAB
        {
            VisualState{0, "Common"},
            VisualState{1, "NORMAL"},
            VisualState{2, "HOT"},
            VisualState{3, "SELECTED"},
            VisualState{4, "DISABLED"},
            VisualState{5, "FOCUSED"},
        };

        inline static const QList<VisualState> STATES_SPP_SOFTWAREEXPLORER
        {
            VisualState{0, "Common"},
            VisualState{1, "NORMAL"},
            VisualState{2, "HOT"},
            VisualState{3, "SELECTED"},
            VisualState{4, "DISABLED"},
            VisualState{5, "FOCUSED"},
        };

        inline static const QList<VisualState> STATES_SPP_OPENBOX
        {
            VisualState{0, "Common"},
            VisualState{1, "NORMAL"},
            VisualState{2, "HOT"},
            VisualState{3, "SELECTED"},
            VisualState{4, "DISABLED"},
            VisualState{5, "FOCUSED"},
        };

        inline static const QList<VisualState> STATES_SPP_MOREPROGRAMSARROWBACK
        {
            VisualState{0, "Common"},
            VisualState{1, "NORMAL"},
            VisualState{2, "HOT"},
            VisualState{3, "PRESSED"},
        };

        inline static const QList<VisualState> STATES_SPP_LOGOFFSPLITBUTTONDROPDOWN
        {
            VisualState{0, "Common"},
            VisualState{1, "NORMAL"},
            VisualState{2, "HOT"},
            VisualState{3, "PRESSED"},
        };

        inline static const QList<VisualState> STATES_TABITEM_GENERAL
        {
            VisualState{0, "Common"},
            VisualState{1, "NORMAL"},
            VisualState{2, "HOT"},
            VisualState{3, "SELECTED"},
            VisualState{4, "DISABLED"},
            VisualState{5, "FOCUSED"},
        };

        inline static const QList<VisualState> STATES_TASKDLG_CONTROLPANE
        {
            VisualState{0, "Common"},
            VisualState{1, "STANDALONE"},
        };

        inline static const QList<VisualState> STATES_TASKDLG_EXPANDOBUTTON
        {
            VisualState{0, "Common"},
            VisualState{1, "NORMAL"},
            VisualState{2, "HOVER"},
            VisualState{3, "PRESSED"},
            VisualState{4, "EXPANDEDNORMAL"},
            VisualState{5, "EXPANDEDHOVER"},
            VisualState{6, "EXPANDEDPRESSED"},
            VisualState{7, "NORMALDISABLED"},
            VisualState{8, "EXPANDEDDISABLED"},
        };

        inline static const QList<VisualState> STATES_TEXTSTYLE_HLINK
        {
            VisualState{0, "Common"},
            VisualState{1, "HYPERLINK_NORMAL"},
            VisualState{2, "HYPERLINK_HOT"},
            VisualState{3, "HYPERLINK_PRESSED"},
            VisualState{4, "HYPERLINK_DISABLED"},
        };

        inline static const QList<VisualState> STATES_TEXTSTYLE_CTRLLABEL
        {
            VisualState{0, "Common"},
            VisualState{1, "CONTROLLABEL_NORMAL"},
            VisualState{2, "CONTROLLABEL_DISABLED"},
        };

        inline static const QList<VisualState> STATES_TOOLBARSTYLE
        {
            VisualState{0, "Common"},
            VisualState{1, "NORMAL"},
            VisualState{2, "HOT"},
            VisualState{3, "PRESSED"},
            VisualState{4, "DISABLED"},
            VisualState{5, "CHECKED"},
            VisualState{6, "HOTCHECKED"},
            VisualState{7, "NEARHOT"},
            VisualState{8, "OTHERSIDEHOT"},

        };

        inline static const QList<VisualState> STATES_TOOLTIP_CLOSE
        {
            VisualState{0, "Common"},
            VisualState{1, "NORMAL"},
            VisualState{2, "HOT"},
            VisualState{3, "PRESSED"},
        };

        inline static const QList<VisualState> STATES_TOOLTIP_BALLOON_AND_STANDARD
        {
            VisualState{0, "Common"},
            VisualState{1, "NORMAL"},
            VisualState{2, "LINK"},
        };

        inline static const QList<VisualState> STATES_TOOLTIP_BALLOONSTEM
        {
            VisualState{0, "Common"},
            VisualState{1, "POINTINGUPLEFTWALL"},
            VisualState{2, "POINTINGUPCENTERED"},
            VisualState{3, "POINTINGUPRIGHTWALL"},
            VisualState{4, "POINTINGDOWNRIGHTWALL"},
            VisualState{5, "POINTINGDOWNCENTERED"},
            VisualState{6, "POINTINGDOWNLEFTWALL"},
        };

        inline static const QList<VisualState> STATES_TOOLTIP_WRENCH
        {
            VisualState{0, "Common"},
            VisualState{1, "NORMAL"},
            VisualState{2, "HOT"},
            VisualState{3, "PRESSED"},
        };

        inline static const QList<VisualState> STATES_TRACKBAR_GENERAL
        {
            VisualState{0, "Common"},
            VisualState{1, "NORMAL"},
        };

        inline static const QList<VisualState> STATES_TRACKBAR_THUMB_GEN
        {
            VisualState{0, "Common"},
            VisualState{1, "NORMAL"},
            VisualState{2, "HOT"},
            VisualState{3, "PRESSED"},
            VisualState{4, "FOCUSED"},
            VisualState{5, "DISABLED"},
        };

        inline static const QList<VisualState> STATES_TREEVIEW_ITEM
        {
            VisualState{0, "Common"},
            VisualState{1, "NORMAL"},
            VisualState{2, "HOT"},
            VisualState{3, "SELECTED"},
            VisualState{4, "DISABLED"},
            VisualState{5, "SELECTEDNOTFOCUS"},
            VisualState{6, "HOTSELECTED"},
        };

        inline static const QList<VisualState> STATES_TREEVIEW_GLYPH
        {
            VisualState{0, "Common"},
            VisualState{1, "CLOSED"},
            VisualState{2, "OPENED"},
        };

        inline static const QList<VisualState> STATES_USERTILE_HOVERBACKGROUND
        {
            VisualState{0, "Common"},
            VisualState{1, "NORMAL"},
            VisualState{2, "HOT"},
            VisualState{3, "PRESSED"},
        };

        inline static const QList<VisualState> STATES_GRIPPER
        {
            VisualState{0, "Common"},
            VisualState{1, "NORMAL"},
            VisualState{2, "CENTERED"},
        };

        inline static const QList<VisualState> STATES_WINDOW_FRAME_GEN
        {
            VisualState{0, "Common"},
            VisualState{1, "ACTIVE"},
            VisualState{2, "INACTIVE"},
        };

        inline static const QList<VisualState> STATES_WINDOW_CAPTION_GEN
        {
            VisualState{0, "Common"},
            VisualState{1, "ACTIVE"},
            VisualState{2, "INACTIVE"},
            VisualState{3, "DISABLED"},
        };

        inline static const QList<VisualState> STATES_WINDOW_BTN_AND_THUMB
        {
            VisualState{0, "Common"},
            VisualState{1, "NORMAL"},
            VisualState{2, "HOT"},
            VisualState{3, "PUSHED"},
            VisualState{4, "DISABLED"},
        };

        inline static const QList<VisualState> STATES_WINDOW_CAPTION_SMALL
        {
            VisualState{0, "Common"},
            VisualState{1, "ACTIVE"},
            VisualState{2, "INACTIVE"},
            VisualState{3, "DISABLED"},
        };
};

}

#endif // VISUALSTATESMAP_H
