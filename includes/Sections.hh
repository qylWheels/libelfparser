#ifndef __LIBELFPARSER_INCLUDES_SECTIONS__
#define __LIBELFPARSER_INCLUDES_SECTIONS__

#include "includes/ISection.hh"

#include <cstddef>

#include <memory>
#include <vector>

namespace libelfparser {
    class Sections {
    public:
        Sections(void *mappedMem);
        std::size_t count() const;
        std::shared_ptr<ISection> operator[](std::size_t n) const;
        
    private:
        std::vector<std::shared_ptr<ISection>> sections_;
    };
}

#endif  /* __LIBELFPARSER_INCLUDES_SECTIONS__ */
