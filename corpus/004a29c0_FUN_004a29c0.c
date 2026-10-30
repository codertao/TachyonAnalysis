
void FUN_004a29c0(void)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = DAT_005640d0;
  if (DAT_005640d0 == 0) {
    FUN_004a1c90();
    return;
  }
  Input_PollJoystick(DAT_005640d0);
  if ((*(byte *)(iVar2 + 0x38) & 1) == 0) {
    FUN_004a1c90();
    return;
  }
  if ((*(byte *)(iVar2 + 0x5c) & 1) == 0) {
    FUN_004a1ce0(1);
  }
  else {
    FUN_004a1cc0();
  }
  if ((*(byte *)(iVar2 + 0x5c) & 2) == 0) {
    FUN_004a1ce0(2);
  }
  else {
    FUN_004a1cc0();
  }
  if ((*(byte *)(iVar2 + 0x5c) & 4) == 0) {
    FUN_004a1ce0(4);
  }
  else {
    FUN_004a1cc0();
  }
  if ((*(byte *)(iVar2 + 0x5c) & 8) == 0) {
    FUN_004a1ce0(8);
  }
  else {
    FUN_004a1cc0();
  }
  if ((*(byte *)(iVar2 + 0x5c) & 0x10) == 0) {
    FUN_004a1ce0(0x10);
  }
  else {
    FUN_004a1cc0();
  }
  if ((*(byte *)(iVar2 + 0x5c) & 0x20) == 0) {
    FUN_004a1ce0(0x20);
  }
  else {
    FUN_004a1cc0();
  }
  if ((*(byte *)(iVar2 + 0x5c) & 0x40) == 0) {
    FUN_004a1ce0(0x40);
  }
  else {
    FUN_004a1cc0();
  }
  if ((*(byte *)(iVar2 + 0x5c) & 0x80) == 0) {
    FUN_004a1ce0(0x80);
  }
  else {
    FUN_004a1cc0();
  }
  if ((*(uint *)(iVar2 + 0x5c) & 0x100) == 0) {
    FUN_004a1ce0(0x100);
  }
  else {
    FUN_004a1cc0();
  }
  if ((*(uint *)(iVar2 + 0x5c) & 0x200) == 0) {
    FUN_004a1ce0(0x200);
  }
  else {
    FUN_004a1cc0();
  }
  if ((*(uint *)(iVar2 + 0x5c) & 0x400) == 0) {
    FUN_004a1ce0(0x400);
  }
  else {
    FUN_004a1cc0();
  }
  if ((*(uint *)(iVar2 + 0x5c) & 0x800) == 0) {
    FUN_004a1ce0(0x800);
  }
  else {
    FUN_004a1cc0();
  }
  if ((*(uint *)(iVar2 + 0x5c) & 0x1000) == 0) {
    FUN_004a1ce0(0x1000);
  }
  else {
    FUN_004a1cc0();
  }
  if ((*(uint *)(iVar2 + 0x5c) & 0x2000) == 0) {
    FUN_004a1ce0(0x2000);
  }
  else {
    FUN_004a1cc0();
  }
  if ((*(uint *)(iVar2 + 0x5c) & 0x4000) == 0) {
    FUN_004a1ce0(0x4000);
  }
  else {
    FUN_004a1cc0();
  }
  if ((*(uint *)(iVar2 + 0x5c) & 0x8000) == 0) {
    FUN_004a1ce0(0x8000);
  }
  else {
    FUN_004a1cc0();
  }
  bVar1 = DAT_0055e0d0;
  if ((DAT_0055e0d0 & 1) == 0) {
    DAT_005640b0 = 0;
  }
  else {
    DAT_005640b0 = __ftol();
    if (DAT_005640b0 < -0x400) {
      DAT_005640b0 = -0x400;
    }
    else if (0x400 < DAT_005640b0) {
      DAT_005640b0 = 0x400;
    }
  }
  if ((bVar1 & 2) == 0) {
    DAT_005640b4 = 0;
  }
  else {
    DAT_005640b4 = __ftol();
    if (DAT_005640b4 < -0x400) {
      DAT_005640b4 = -0x400;
    }
    else if (0x400 < DAT_005640b4) {
      DAT_005640b4 = 0x400;
    }
  }
  if (((bVar1 & 4) != 0) && ((*(byte *)(iVar2 + 0x38) & 2) != 0)) {
    DAT_005640b8 = __ftol();
    if (DAT_005640b8 < -0x400) {
      DAT_005640b8 = -0x400;
    }
    else if (0x400 < DAT_005640b8) {
      DAT_005640b8 = 0x400;
    }
  }
  if ((bVar1 & 8) == 0) {
    DAT_005640bc = 0;
  }
  else if ((*(byte *)(iVar2 + 0x38) & 4) != 0) {
    DAT_005640bc = __ftol();
    if (DAT_005640bc < -0x400) {
      DAT_005640bc = -0x400;
    }
    else if (0x400 < DAT_005640bc) {
      DAT_005640bc = 0x400;
    }
  }
  if ((*(byte *)(iVar2 + 0x38) & 8) != 0) {
    FUN_004a1b20(*(undefined4 *)(iVar2 + 0x4c),0x10000);
  }
  if ((*(byte *)(iVar2 + 0x38) & 0x10) != 0) {
    FUN_004a1b20(*(undefined4 *)(iVar2 + 0x50),0x100000);
  }
  if ((*(byte *)(iVar2 + 0x38) & 0x20) != 0) {
    FUN_004a1b20(*(undefined4 *)(iVar2 + 0x54),0x1000000);
  }
  if ((*(byte *)(iVar2 + 0x38) & 0x40) != 0) {
    FUN_004a1b20(*(undefined4 *)(iVar2 + 0x58),0x10000000);
  }
  return;
}

