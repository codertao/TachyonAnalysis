
/* CRT: getqloc callback */

uint _LanguageEnumProc(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_7c [120];
  
  uVar1 = _GetPrimaryLen(param_1);
  iVar2 = (*DAT_00565194)(uVar1,(-(uint)(DAT_00565180 != 0) & 0xfffff002) + 0x1001,local_7c,0x78);
  if (iVar2 == 0) {
    DAT_0056518c = 0;
    return 1;
  }
  iVar2 = __stricmp(DAT_00565184,local_7c);
  if (iVar2 == 0) {
    if (DAT_00565180 == 0) {
      uVar3 = 1;
      goto LAB_004c1dc2;
    }
  }
  else {
    if (((DAT_00565180 != 0) || (DAT_0056517c == 0)) ||
       (iVar2 = __strnicmp(DAT_00565184,local_7c,DAT_0056517c), iVar2 != 0)) goto LAB_004c1de1;
    uVar3 = 0;
LAB_004c1dc2:
    iVar2 = _TestDefaultLanguage(uVar1,uVar3);
    if (iVar2 == 0) goto LAB_004c1de1;
  }
  DAT_0056518c = DAT_0056518c | 4;
  DAT_00565174 = uVar1;
  DAT_00565190 = uVar1;
LAB_004c1de1:
  return ~DAT_0056518c >> 2 & 1;
}

