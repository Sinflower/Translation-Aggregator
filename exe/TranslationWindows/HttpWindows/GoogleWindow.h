#pragma once
#include "HttpWindow.h"

class GoogleWindow : public HttpWindow
{
public:
	GoogleWindow();
	~GoogleWindow();
	wchar_t *FindTranslatedText(wchar_t *html);
	char *GetLangIdString(Language lang, int src);
	wchar_t *GetTranslationPath(Language src, Language dst, const wchar_t *text);

	private:
	int m_tlCnt;
	wchar_t *m_pOrgRequestHeaders;
};
