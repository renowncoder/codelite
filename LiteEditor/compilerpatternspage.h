#ifndef __compilerpatternspage__
#define __compilerpatternspage__

/**
@file
Subclass of CompilerPatternsBase, which is generated by wxFormBuilder.
*/

#include "compiler_pages.h"
#include "compiler.h"
#include "advanced_settings.h"

/** Implementing CompilerPatternsBase */
class CompilerPatternsPage : public CompilerPatternsBase, public ICompilerSubPage
{
    wxString m_cmpname;

public:
    /** Constructor */
    CompilerPatternsPage( wxWindow* parent, const wxString &cmpname );
    virtual void Save(CompilerPtr cmp);

protected:
    void DoUpdateErrPattern(long item);
    void DoUpdateWarnPattern(long item);

    virtual void OnBtnAddErrPattern( wxCommandEvent& event );
    virtual void OnBtnDelErrPattern( wxCommandEvent& event );
    virtual void OnBtnUpdateErrPattern( wxCommandEvent& event );
    virtual void OnErrItemActivated( wxListEvent& event );
    virtual void OnBtnAddWarnPattern( wxCommandEvent& event );
    virtual void OnBtnDelWarnPattern( wxCommandEvent& event );
    virtual void OnBtnUpdateWarnPattern( wxCommandEvent& event );
    virtual void OnWarnItemActivated( wxListEvent& event );
    virtual void OnErrorPatternSelectedUI(wxUpdateUIEvent &event);
    virtual void OnWarningPatternSelectedUI(wxUpdateUIEvent &event);
};

class CompilerPatternDlg : public CompilerPatternDlgBase
{
public:
    CompilerPatternDlg(wxWindow* parent, const wxString& title);
    virtual ~CompilerPatternDlg();

    void SetPattern(const wxString& pattern, const wxString& lineIdx, const wxString& fileIdx);

protected:
    virtual void OnSubmit( wxCommandEvent& event );

public:
    wxString GetPattern() const {
        return m_textPattern->GetValue();
    }

    wxString GetFileIndex() const {
        return m_textFileIndex->GetValue();
    }

    wxString GetLineIndex() const {
        return m_textLineNumber->GetValue();
    }
};

#endif // __compilerpatternspage__
