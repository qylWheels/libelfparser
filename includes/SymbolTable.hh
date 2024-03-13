#ifndef __LIBELFPARSER_INCLUDES_SYMBOLTABLE__
#define __LIBELFPARSER_INCLUDES_SYMBOLTABLE__

#include <includes/ISection.hh>

#include <elf.h>

#include <cstddef>

#include <string>
#include <vector>

namespace libelfparser {
    class SymbolTable: public ISection {
    public:
        SymbolTable(void *mappedMem);
        std::size_t Count() const;
        std::string operator[](std::size_t n) const;
    
    private:
        std::vector<Elf64_Sym> symbolTable_;
        char *symbols_;
    };
}

#endif  /* __LIBELFPARSER_INCLUDES_SYMBOLTABLE__ */
