#ifndef __LIBELFPARSER_INCLUDES_DYNAMICSYMBOLTABLE__
#define __LIBELFPARSER_INCLUDES_DYNAMICSYMBOLTABLE__

#include <includes/ISection.hh>

#include <elf.h>

#include <cstddef>

#include <string>
#include <vector>

namespace libelfparser {
    class DynamicSymbolTable: public ISection {
    public:
        DynamicSymbolTable(void *mappedMem);
        std::size_t Count() const;
        std::string operator[](std::size_t n) const;

    public:
        virtual std::string Name() const;
        virtual std::size_t OffsetInFile() const;
        virtual std::size_t SizeInFile() const;
        virtual std::size_t VirtualAddress() const;
        virtual std::size_t VirtualSize() const;
        virtual std::size_t AddressAlign() const;
        virtual std::vector<std::uint8_t> Content() const;

    private:
        std::vector<Elf64_Sym> symbolTable_;
        std::vector<std::string> symbols_;
    };
}

#endif  /* __LIBELFPARSER_INCLUDES_DYNAMICSYMBOLTABLE__ */
