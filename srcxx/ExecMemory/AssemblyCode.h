#ifndef ZZ_ASSEMBLY_CODE_H_
#define ZZ_ASSEMBLY_CODE_H_

#include "stdcxx/LiteObject.h"
#include "core/modules/assembler/assembler.h"

class CodeBuffer;

namespace zz {

class AssemblyCode : public LiteObject {

public:
  // dummy
  void initWithCodeBuffer(CodeBuffer *codeBuffer);

  // dummy
  void initWithAddressRange(void *address, int size);

  // realize the buffer address to runtime code, and create a corresponding Code Object
  static AssemblyCode *FinalizeFromAddress(uintptr_t address, int size);

  // realize the buffer address to runtime code, and create a corresponding Code Object
  static AssemblyCode *FinalizeFromTurboAssember(AssemblerBase *assember);

  // dummy method
  inline addr_t raw_instruction_start() {
    return address_;
  };

  // dummy method
  inline int raw_instruction_size() {
    return size_;
  };

private:
  addr_t address_;
  int size_;
};

} // namespace zz

#endif
