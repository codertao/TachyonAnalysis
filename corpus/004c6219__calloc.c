
/* CRT */

void * _calloc(int param_1,int param_2)

{
  void *_Dst;
  LPVOID pvVar1;
  int iVar2;
  uint _Size;
  uint uVar3;
  
  _Size = param_1 * param_2;
  uVar3 = _Size;
  if (_Size < 0xffffffe1) {
    if (_Size == 0) {
      uVar3 = 1;
    }
    uVar3 = uVar3 + 0xf & 0xfffffff0;
  }
  do {
    if (uVar3 < 0xffffffe1) {
      if (_Size < DAT_005621a0 || _Size - DAT_005621a0 == 0) {
        __lock(9);
        _Dst = (void *)___sbh_alloc_block(_Size);
        __unlock(9);
        if (_Dst != (void *)0x0) {
          _memset(_Dst,0,_Size);
          return _Dst;
        }
      }
      pvVar1 = HeapAlloc(DAT_006c9e9c,8,uVar3);
      if (pvVar1 != (LPVOID)0x0) {
        return pvVar1;
      }
    }
    if (DAT_0056519c == 0) {
      return (void *)0x0;
    }
    iVar2 = __callnewh(uVar3);
  } while (iVar2 != 0);
  return (void *)0x0;
}

