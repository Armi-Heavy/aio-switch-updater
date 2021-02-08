#pragma once

#include "utils.hpp"
#include "confirm_page.hpp"
#include "worker_page.hpp"

class DownloadPayloadPage : public brls::AppletFrame
{
    private:
        brls::Label* label;
        brls::Label* notFound;
        brls::List* list;
        brls::ListItem* listItem;

    public:
        DownloadPayloadPage();
};