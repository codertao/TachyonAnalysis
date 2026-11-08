
uint FUN_004c1adc(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  undefined4 uVar4;
  undefined1 local_7c [120];
  
  iVar1 = FUN_004c20cd(param_1);
  iVar2 = (*DAT_00565194)(iVar1,(-(uint)(DAT_00565178 != 0) & 0xfffff005) + 0x1002,local_7c,0x78);
  if (iVar2 == 0) {
    DAT_0056518c = 0;
    return 1;
  }
  iVar2 = str_cmp(DAT_00565188,local_7c);
  if (iVar2 == 0) {
    iVar2 = (*DAT_00565194)(iVar1,(-(uint)(DAT_00565180 != 0) & 0xfffff002) + 0x1001,local_7c,0x78);
    if (iVar2 == 0) {
      DAT_0056518c = 0;
      return 1;
    }
    iVar2 = str_cmp(DAT_00565184,local_7c);
    if (iVar2 == 0) {
      DAT_0056518c = DAT_0056518c | 0x304;
      DAT_00565190 = iVar1;
LAB_004c1b82:
      DAT_00565174 = iVar1;
    }
    else if ((DAT_0056518c & 2) == 0) {
      if ((DAT_0056517c == 0) ||
         (iVar2 = FUN_004c6890(DAT_00565184,local_7c,DAT_0056517c), iVar2 != 0)) {
        if (((DAT_0056518c & 1) == 0) && (iVar2 = FUN_004c1f30(iVar1), iVar2 != 0)) {
          DAT_0056518c = DAT_0056518c | 1;
          DAT_00565190 = iVar1;
        }
      }
      else {
        DAT_0056518c = DAT_0056518c | 2;
        DAT_00565190 = iVar1;
        sVar3 = _strlen(DAT_00565184);
        if (sVar3 == DAT_0056517c) goto LAB_004c1b82;
      }
    }
  }
  if ((DAT_0056518c & 0x300) == 0x300) goto LAB_004c1ccc;
  iVar2 = (*DAT_00565194)(iVar1,(-(uint)(DAT_00565180 != 0) & 0xfffff002) + 0x1001,local_7c,0x78);
  if (iVar2 == 0) {
    DAT_0056518c = 0;
    return 1;
  }
  iVar2 = str_cmp(DAT_00565184,local_7c);
  if (iVar2 == 0) {
    DAT_0056518c = DAT_0056518c | 0x200;
    if (((DAT_00565180 == 0) && (DAT_0056517c != 0)) &&
       (sVar3 = _strlen(DAT_00565184), sVar3 == DAT_0056517c)) {
      uVar4 = 1;
      goto LAB_004c1cab;
    }
  }
  else {
    if (((DAT_00565180 != 0) || (DAT_0056517c == 0)) ||
       (iVar2 = FUN_004c6890(DAT_00565184,local_7c,DAT_0056517c), iVar2 != 0)) goto LAB_004c1ccc;
    uVar4 = 0;
LAB_004c1cab:
    iVar2 = FUN_004c1f4f(iVar1,uVar4);
    if (iVar2 == 0) goto LAB_004c1ccc;
  }
  DAT_0056518c = DAT_0056518c | 0x100;
  if (DAT_00565174 == 0) {
    DAT_00565174 = iVar1;
  }
LAB_004c1ccc:
  return ~DAT_0056518c >> 2 & 1;
}

