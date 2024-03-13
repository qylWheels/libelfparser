#ifndef __LIBELFPARSER_INCLUDES_PARSER__
#define __LIBELFPARSER_INCLUDES_PARSER__

#include "includes/Sections.hh"
#include "includes/SymbolTable.hh"
#include "includes/DynamicSymbolTable.hh"

#include <string>

namespace libelfparser {
    class Parser {
    public:
        Parser(std::string path);
        ~Parser();
        Sections GetSections() const;
        SymbolTable GetSymbolTable() const;
        DynamicSymbolTable GetDynamicSymbolTable() const;

    private:
        std::string path_;
        void *mappedMem_;
    };
}

#endif  /* __LIBELFPARSER_INCLUDES_PARSER__ */
