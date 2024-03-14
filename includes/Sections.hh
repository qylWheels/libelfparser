#ifndef __LIBELFPARSER_INCLUDES_SECTIONS__
#define __LIBELFPARSER_INCLUDES_SECTIONS__

#include "includes/ISection.hh"

#include <elf.h>

#include <cstddef>

#include <memory>
#include <vector>

namespace libelfparser {
    class Section : public ISection {
    public:
        virtual std::string Name() const;
        virtual std::size_t OffsetInFile() const;
        virtual std::size_t SizeInFile() const;
        virtual std::size_t VirtualAddress() const;
        virtual std::size_t VirtualSize() const;
        virtual std::size_t AddressAlign() const;
        virtual std::vector<std::uint8_t> Content() const;
    private:
        Elf64_Shdr sectionHeader_;
    };

    class Sections {
    public:
        Sections(void *mappedMem);
        std::size_t count() const;
        Section operator[](std::size_t n) const;
        
    private:
        std::vector<Section> sections_;
    };
}

#endif  /* __LIBELFPARSER_INCLUDES_SECTIONS__ */
