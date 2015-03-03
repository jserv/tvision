/*
 *      Turbo Vision - Version 2.0
 *
 *      Copyright (c) 1994 by Borland International
 *      All Rights Reserved.
 *

Modified by Robert H\x94hne to be used for RHIDE.

 *
 *
 */

#define Uses_TScreen
#define Uses_TRadioButtons
#define Uses_TMenuBox
#define Uses_TFrame
#define Uses_TIndicator
#define Uses_THistory
#define Uses_TColorSelector
#define Uses_TMonoSelector
#define Uses_TColorDialog
#define Uses_TInputLine
#define Uses_TStatusLine
#define Uses_TCheckBoxes
#define Uses_TScrollBar
#define Uses_TButton
#define Uses_TDirListBox
#define Uses_TFileEditor
#define Uses_TFileInfoPane
#define Uses_TDeskTop
#define Uses_TListViewer
#include <tv.h>

// All the strings are arrays ASCIIZ
// All duplicated to restore the original

uchar TView::specialChars[] =
{
    175, 174, 26, 27, ' ', ' ', 0
};
uchar TView::ospecialChars[] =
{
    175, 174, 26, 27, ' ', ' ', 0
};

uchar TView::noMoireUnFill=' ';  // Just space
uchar TView::noMoireFill=0xDB;   // Full block
uchar TView::onoMoireFill=0xDB;  // Full block

char TRadioButtons::button[] = " ( ) ";
char TRadioButtons::obutton[] = " ( ) ";
char TRadioButtons::check = 7; // \x07
char TRadioButtons::ocheck = 7;

//" \xda\xc4\xbf  \xc0\xc4\xd9  \xb3 \xb3  \xc3\xc4\xb4 " 8
char TMenuBox::frameChars[] = " \332\304\277  \300\304\331  \263 \263  \303\304\264 ";
char TMenuBox::oframeChars[] = " \332\304\277  \300\304\331  \263 \263  \303\304\264 ";
char TMenuBox::rightArrow = 16; // \x10
char TMenuBox::orightArrow = 16; // \x10

const char TFrame::initFrame[19] =
  "\x06\x0A\x0C\x05\x00\x05\x03\x0A\x09\x16\x1A\x1C\x15\x00\x15\x13\x1A\x19";

char TFrame::frameChars[33] =
    "   \xc0 \xb3\xda\xc3 \xd9\xc4\xc1\xbf\xb4\xc2\xc5   \xc8 \xba\xc9\xc7 \xbc\xcd\xcf\xbb\xb6\xd1 "; // for UnitedStates code page
char TFrame::oframeChars[33] =
    "   \xc0 \xb3\xda\xc3 \xd9\xc4\xc1\xbf\xb4\xc2\xc5   \xc8 \xba\xc9\xc7 \xbc\xcd\xcf\xbb\xb6\xd1 "; // for UnitedStates code page

// \xfe \x18 \x12
char TFrame::closeIcon[] = "[~\xFE~]";
char TFrame::ocloseIcon[] = "[~\xFE~]";
char TFrame::zoomIcon[] = "[~\x18~]";
char TFrame::ozoomIcon[] = "[~\x18~]";
char TFrame::unZoomIcon[] = "[~\x12~]";
char TFrame::ounZoomIcon[] = "[~\x12~]";
// Note: Eddie proposed 0xF (WHITE SUN WITH RAYS) but this reduces to * and
// is the same as 0xFE (BLACK SQUARE) (also reduced to *).
char TFrame::animIcon[] = "[~+~]";
char TFrame::oanimIcon[] = "[~+~]";
char TFrame::dragIcon[] = "~\xc4\xd9~";
char TFrame::odragIcon[] = "~\xc4\xd9~";

char TIndicator::dragFrame = '\xCD';  // \xcd
char TIndicator::odragFrame = '\xCD';  // \xcd
char TIndicator::normalFrame = '\xC4'; // \xc4
char TIndicator::onormalFrame = '\xC4'; // \xc4
char TIndicator::modifiedStar = 15; // \x0f
char TIndicator::omodifiedStar = 15; // \x0f

char THistory::icon[] = "\xDE~\x19~\xDD"; // \xde\x19\xdd
char THistory::oicon[] = "\xDE~\x19~\xDD"; // \xde\x19\xdd

char TColorSelector::icon = '\xDB'; // \xdb
char TColorSelector::oicon = '\xDB'; // \xdb
char TColorSelector::mark = 8;
char TColorSelector::omark = 8;

char TMonoSelector::button[] = " ( ) ";
char TMonoSelector::obutton[] = " ( ) ";

char TInputLine::rightArrow = '\x10';
char TInputLine::orightArrow = '\x10';
char TInputLine::leftArrow = '\x11';
char TInputLine::oleftArrow = '\x11';

char TStatusLine::hintSeparator[] = "\xB3 "; // \xb3
char TStatusLine::ohintSeparator[] = "\xB3 "; // \xb3

char TCheckBoxes::button[] = " [ ] ";
char TCheckBoxes::obutton[] = " [ ] ";

TScrollChars TScrollBar::vChars = {30, 31, '\xB1', '\xFE', '\xB2'}; // \x1e\x1f\xb1\xfe\xb2
TScrollChars TScrollBar::ovChars = {30, 31, '\xB1', '\xFE', '\xB2'}; // \x1e\x1f\xb1\xfe\xb2
TScrollChars TScrollBar::hChars = {17, 16, '\xB1', '\xFE', '\xB2'}; // \x11\x10\xb1\xfe\xb2
TScrollChars TScrollBar::ohChars = {17, 16, '\xB1', '\xFE', '\xB2'}; // \x11\x10\xb1\xfe\xb2

char TButton::shadows[] = "\xDC\xDB\xDF"; // \xdc\xdb\xdf
char TButton::oshadows[] = "\xDC\xDB\xDF"; // \xdc\xdb\xdf
char TButton::markers[] = "[]";
char TButton::omarkers[] = "[]";

char TDirListBox::pathDir[]   = "\xc0\xc4\xc2";
char TDirListBox::opathDir[]   = "\xc0\xc4\xc2";
char TDirListBox::firstDir[]  =   "\xc0\xc2\xc4";
char TDirListBox::ofirstDir[]  =   "\xc0\xc2\xc4";
char TDirListBox::middleDir[] =   " \xc3\xc4";
char TDirListBox::omiddleDir[] =   " \xc3\xc4";
char TDirListBox::lastDir[]   =   " \xc0\xc4";
char TDirListBox::olastDir[]   =   " \xc0\xc4";
char TDirListBox::graphics[]  = "\xc0\xc3\xc4";
char TDirListBox::ographics[]  = "\xc0\xc3\xc4";

const char * TFileInfoPane::pmText = "p";
const char * TFileInfoPane::amText = "a";

char TDeskTop::defaultBkgrnd = '\xB0';
char TDeskTop::odefaultBkgrnd = '\xB0';

uchar TListViewer::columnSeparator = 179; // \xb3
uchar TListViewer::ocolumnSeparator = 179; // \xb3

