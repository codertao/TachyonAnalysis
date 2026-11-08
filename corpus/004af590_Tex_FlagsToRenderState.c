
/* material/texture u16 flags -> renderer state bits */

uint Tex_FlagsToRenderState(uint param_1)

{
  uint uVar1;
  
  if ((param_1 & 8) == 0) {
    uVar1 = (-(uint)((param_1 & 0x100) != 0) & 0x110002) + 0x100;
  }
  else if ((param_1 & 0x1000000) == 0) {
    if ((param_1 & 0x10) == 0) {
      if ((param_1 & 0x20000) == 0) {
        if ((param_1 & 0x2000000) == 0) {
          if ((param_1 & 0x100000) == 0) {
            uVar1 = (-(uint)((param_1 & 0x200000) != 0) & 0xe0012) + 0x20400;
          }
          else {
            uVar1 = 0x100402;
          }
        }
        else {
          uVar1 = 0x100411;
        }
      }
      else {
        uVar1 = 0x41131;
      }
    }
    else {
      uVar1 = 0x65431;
    }
  }
  else {
    uVar1 = 0x42431;
  }
  if ((param_1 & 0x10000000) != 0) {
    uVar1 = uVar1 & 0xfffbffff | 0x100000;
  }
  if ((param_1 & 0x20000000) != 0) {
    uVar1 = uVar1 | 0x200000;
  }
  if ((param_1 & 0x2000) != 0) {
    uVar1 = uVar1 | 0x800000;
  }
  return uVar1;
}

