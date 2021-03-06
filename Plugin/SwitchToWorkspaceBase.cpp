//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: SwitchToWorkspaceBase.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#include "SwitchToWorkspaceBase.h"

// Declare the bitmap loading function
extern void wxCrafter7DSS5TInitBitmapResources();

static bool bBitmapLoaded = false;

SwitchToWorkspaceBaseDlg::SwitchToWorkspaceBaseDlg(wxWindow* parent, wxWindowID id, const wxString& title,
                                                   const wxPoint& pos, const wxSize& size, long style)
    : wxDialog(parent, id, title, pos, size, style)
{
    if(!bBitmapLoaded) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxCrafter7DSS5TInitBitmapResources();
        bBitmapLoaded = true;
    }

    wxBoxSizer* boxSizer2 = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(boxSizer2);

    m_panel12 = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), wxTAB_TRAVERSAL);

    boxSizer2->Add(m_panel12, 1, wxEXPAND, WXC_FROM_DIP(5));

    wxBoxSizer* boxSizer14 = new wxBoxSizer(wxVERTICAL);
    m_panel12->SetSizer(boxSizer14);

    wxFlexGridSizer* flexGridSizer4 = new wxFlexGridSizer(0, 2, 0, 0);
    flexGridSizer4->SetFlexibleDirection(wxBOTH);
    flexGridSizer4->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);
    flexGridSizer4->AddGrowableCol(1);

    boxSizer14->Add(flexGridSizer4, 0, wxEXPAND, WXC_FROM_DIP(5));

    m_staticText6 = new wxStaticText(m_panel12, wxID_ANY, _("Choose a workspace file:"), wxDefaultPosition,
                                     wxDLG_UNIT(m_panel12, wxSize(-1, -1)), 0);

    flexGridSizer4->Add(m_staticText6, 0, wxALL | wxALIGN_RIGHT | wxALIGN_CENTER_VERTICAL, WXC_FROM_DIP(5));

    m_filePicker = new wxFilePickerCtrl(m_panel12, wxID_ANY, wxEmptyString, _("Select a file"),
                                        wxT("CodeLite Workspace files (*.workspace)|*.workspace"), wxDefaultPosition,
                                        wxDLG_UNIT(m_panel12, wxSize(-1, -1)),
                                        wxFLP_DEFAULT_STYLE | wxFLP_USE_TEXTCTRL | wxFLP_SMALL);

    flexGridSizer4->Add(m_filePicker, 0, wxALL | wxEXPAND, WXC_FROM_DIP(5));

    m_staticText10 = new wxStaticText(m_panel12, wxID_ANY, _("Or select a previously opened workspace:"),
                                      wxDefaultPosition, wxDLG_UNIT(m_panel12, wxSize(-1, -1)), 0);

    boxSizer14->Add(m_staticText10, 0, wxALL, WXC_FROM_DIP(5));

    m_dvListCtrl = new clThemedListCtrl(m_panel12, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(m_panel12, wxSize(-1, -1)),
                                        wxDV_ROW_LINES | wxDV_SINGLE);

    boxSizer14->Add(m_dvListCtrl, 1, wxALL | wxEXPAND, WXC_FROM_DIP(5));

    m_dvListCtrl->AppendTextColumn(_("Name"), wxDATAVIEW_CELL_INERT, WXC_FROM_DIP(-2), wxALIGN_LEFT,
                                   wxDATAVIEW_COL_RESIZABLE);
    m_dvListCtrl->AppendTextColumn(_("Path"), wxDATAVIEW_CELL_INERT, WXC_FROM_DIP(-2), wxALIGN_LEFT,
                                   wxDATAVIEW_COL_RESIZABLE);
    m_stdBtnSizer18 = new wxStdDialogButtonSizer();

    boxSizer2->Add(m_stdBtnSizer18, 0, wxALL | wxALIGN_CENTER_HORIZONTAL, WXC_FROM_DIP(10));

    m_button20 = new wxButton(this, wxID_OK, wxT(""), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);
    m_button20->SetDefault();
    m_stdBtnSizer18->AddButton(m_button20);

    m_button22 = new wxButton(this, wxID_CANCEL, wxT(""), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);
    m_stdBtnSizer18->AddButton(m_button22);
    m_stdBtnSizer18->Realize();

    SetName(wxT("SwitchToWorkspaceBaseDlg"));
    SetSize(wxDLG_UNIT(this, wxSize(-1, -1)));
    if(GetSizer()) {
        GetSizer()->Fit(this);
    }
    if(GetParent()) {
        CentreOnParent(wxBOTH);
    } else {
        CentreOnScreen(wxBOTH);
    }
#if wxVERSION_NUMBER >= 2900
    if(!wxPersistenceManager::Get().Find(this)) {
        wxPersistenceManager::Get().RegisterAndRestore(this);
    } else {
        wxPersistenceManager::Get().Restore(this);
    }
#endif
    // Connect events
    m_dvListCtrl->Connect(wxEVT_COMMAND_DATAVIEW_ITEM_ACTIVATED,
                          wxDataViewEventHandler(SwitchToWorkspaceBaseDlg::OnItemActivated), NULL, this);
    m_dvListCtrl->Connect(wxEVT_COMMAND_DATAVIEW_SELECTION_CHANGED,
                          wxDataViewEventHandler(SwitchToWorkspaceBaseDlg::OnSelectionChanged), NULL, this);
}

SwitchToWorkspaceBaseDlg::~SwitchToWorkspaceBaseDlg()
{
    m_dvListCtrl->Disconnect(wxEVT_COMMAND_DATAVIEW_ITEM_ACTIVATED,
                             wxDataViewEventHandler(SwitchToWorkspaceBaseDlg::OnItemActivated), NULL, this);
    m_dvListCtrl->Disconnect(wxEVT_COMMAND_DATAVIEW_SELECTION_CHANGED,
                             wxDataViewEventHandler(SwitchToWorkspaceBaseDlg::OnSelectionChanged), NULL, this);
}
