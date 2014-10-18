#ifndef CCSPEC_MISMATCH_H_
#define CCSPEC_MISMATCH_H_

#include <string>
#include <ccspec/matcher.h>
#include "exception.h"

namespace ccspec {
namespace expectation {

template <typename U, typename ConcreteMatcher, typename V>
class Mismatch : public Exception {
  public:
    explicit Mismatch(const U& value, const Matcher<ConcreteMatcher, V>&);

    virtual std::string toString() const;

  private:
    const U& value_;
    const Matcher<ConcreteMatcher, V>& matcher_;
};

} // namespace expectation
} // namespace ccspec

#include "mismatch.cc"

#endif // CCSPEC_MISMATCH_H_