
/* CRT (was maybe_find_in_list) */

uint _bsearch(undefined4 lookup_code,uint param_2,uint count,int stride,code *callback)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = (count - 1) * stride + param_2;
  if (param_2 <= uVar4) {
    do {
      uVar3 = count >> 1;
      if (uVar3 == 0) {
        if (count == 0) {
          return 0;
        }
        iVar2 = (*callback)(lookup_code,param_2);
        return ~-(uint)(iVar2 != 0) & param_2;
      }
      uVar1 = uVar3;
      if ((count & 1) == 0) {
        uVar1 = uVar3 - 1;
      }
      uVar1 = uVar1 * stride + param_2;
      iVar2 = (*callback)(lookup_code,uVar1);
      if (iVar2 == 0) {
        return uVar1;
      }
      if (iVar2 < 0) {
        uVar4 = uVar1 - stride;
        if ((count & 1) == 0) {
          uVar3 = uVar3 - 1;
        }
      }
      else {
        param_2 = uVar1 + stride;
      }
      count = uVar3;
    } while (param_2 <= uVar4);
  }
  return 0;
}

