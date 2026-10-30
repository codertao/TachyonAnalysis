
void FUN_00429900(void)

{
  int iVar1;
  byte bVar2;
  undefined1 local_18 [24];
  
  iVar1 = DAT_005b3300;
  if ((DAT_005b0748 == 0) &&
     (((DAT_005b0744 == 0 || (DAT_005b0750 < 0xc9)) || (bVar2 = FUN_0048e350(), 5 < (bVar2 & 0x1f)))
     )) {
    FUN_0052db6a(local_18,-*(int *)(iVar1 + 0x4c),-*(int *)(iVar1 + 0x50),-*(int *)(iVar1 + 0x54));
    FUN_0052dbcd(local_18);
    for (iVar1 = DAT_005b31c8; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x94)) {
      FUN_004297e0(iVar1);
    }
  }
  return;
}

