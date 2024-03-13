#ifndef __LIBELFPARSER_INCLUDES_ISECTION__
#define __LIBELFPARSER_INCLUDES_ISECTION__

#include <cstdint>

#include <string>
#include <vector>

namespace libelfparser {
    class ISection {
    public:
        virtual std::string Name() const = 0;
        virtual std::size_t OffsetInFile() const = 0;
        virtual std::size_t SizeInFile() const = 0;
        virtual std::size_t VirtualAddress() const = 0;
        virtual std::size_t VirtualSize() const = 0;
        virtual std::vector<std::uint8_t> Content() const = 0;
    };
}

#endif  /* __LIBELFPARSER_INCLUDES_ISECTION__ */
