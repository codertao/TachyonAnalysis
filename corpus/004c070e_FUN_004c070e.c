
undefined4 * FUN_004c070e(void)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)0x0;
  FUN_004c15cd(2);
  iVar3 = 0;
  if (0 < DAT_006caec0) {
    do {
      iVar1 = *(int *)(DAT_006c9ea0 + iVar3 * 4);
      if (iVar1 == 0) {
        iVar3 = iVar3 * 4;
        pvVar2 = _malloc(0x38);
        *(void **)(iVar3 + DAT_006c9ea0) = pvVar2;
        if (*(int *)(iVar3 + DAT_006c9ea0) != 0) {
          InitializeCriticalSection((LPCRITICAL_SECTION)(*(int *)(iVar3 + DAT_006c9ea0) + 0x20));
          EnterCriticalSection((LPCRITICAL_SECTION)(*(int *)(iVar3 + DAT_006c9ea0) + 0x20));
          puVar4 = *(undefined4 **)(iVar3 + DAT_006c9ea0);
LAB_004c07b2:
          if (puVar4 != (undefined4 *)0x0) {
            puVar4[4] = 0xffffffff;
            puVar4[1] = 0;
            puVar4[3] = 0;
            puVar4[2] = 0;
            *puVar4 = 0;
            puVar4[7] = 0;
          }
        }
        break;
      }
      if ((*(byte *)(iVar1 + 0xc) & 0x83) == 0) {
        FUN_004bfab4(iVar3,iVar1);
        iVar1 = *(int *)(DAT_006c9ea0 + iVar3 * 4);
        if ((*(byte *)(iVar1 + 0xc) & 0x83) == 0) {
          puVar4 = *(undefined4 **)(DAT_006c9ea0 + iVar3 * 4);
          goto LAB_004c07b2;
        }
        FUN_004bfb06(iVar3,iVar1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_006caec0);
  }
  FUN_004c162e(2);
  return puVar4;
}

