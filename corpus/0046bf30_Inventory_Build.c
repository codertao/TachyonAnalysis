
/* sweep: INVENTORY LIST */

void Inventory_Build(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char *_Source;
  char *_Dest;
  char *local_4;
  
  iVar1 = Inventory_Count();
  uVar3 = 0;
  if (DAT_00589748 != (char *)0x0) {
    OurFreeMem(DAT_00589748);
    DAT_00589748 = (char *)0x0;
    DAT_00589744 = 0;
  }
  if (((iVar1 != 0) &&
      (Mem_AllocZeroTagged(&DAT_00589748,iVar1 * 0x24,4,s_INVENTORY_LIST_0054ae6c,0xa100),
      DAT_00589748 != (char *)0x0)) && (DAT_00589744 = iVar1, DAT_0058973c != 0)) {
    local_4 = DAT_00589740 + 0x20;
    _Source = DAT_00589740;
    _Dest = DAT_00589748;
    do {
      iVar2 = Player_GetVarInt(local_4,_Source);
      if (iVar2 != 0) {
        *(char **)(_Dest + 0x20) = _Source;
        _strncpy(_Dest,_Source,0x1f);
        _Dest = _Dest + 0x24;
        iVar1 = iVar1 + -1;
        if (iVar1 == 0) {
          return;
        }
      }
      uVar3 = uVar3 + 1;
      local_4 = local_4 + 0x5c;
      _Source = _Source + 0x5c;
    } while (uVar3 < DAT_0058973c);
  }
  return;
}

