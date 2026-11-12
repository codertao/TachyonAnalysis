
/* sweep: guess */

void Vid_BlitOTW_Copy(void)

{
  undefined4 uVar1;
  bool bVar2;
  undefined2 uVar3;
  int iVar4;
  undefined1 uVar7;
  undefined4 *puVar5;
  undefined2 *puVar6;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined2 *puVar11;
  
  puVar5 = (undefined4 *)vid_LockOTW();
  puVar6 = (undefined2 *)vid_LockPrimary();
  iVar4 = DAT_0060231c;
  if (puVar5 == (undefined4 *)0x0) {
    vid_UnlockPrimary();
    return;
  }
  iVar9 = 0xf0;
  do {
    iVar10 = 0x50;
    do {
      puVar11 = puVar6;
      uVar1 = *puVar5;
      uVar3 = (undefined2)CONCAT31((int3)uVar1,(char)uVar1);
      *puVar11 = uVar3;
      *(undefined2 *)((int)puVar11 + iVar4) = uVar3;
      uVar7 = (undefined1)((uint)uVar1 >> 8);
      uVar3 = CONCAT11(uVar7,uVar7);
      puVar11[1] = uVar3;
      *(undefined2 *)((int)puVar11 + iVar4 + 2) = uVar3;
      uVar3 = (undefined2)CONCAT21((short)((uint)uVar1 >> 0x10),(char)((uint)uVar1 >> 0x10));
      puVar11[2] = uVar3;
      *(undefined2 *)((int)puVar11 + iVar4 + 4) = uVar3;
      uVar7 = (undefined1)((uint)uVar1 >> 0x18);
      uVar3 = CONCAT11(uVar7,uVar7);
      puVar11[3] = uVar3;
      *(undefined2 *)((int)puVar11 + iVar4 + 6) = uVar3;
      puVar5 = puVar5 + 1;
      iVar8 = iVar10 + -1;
      bVar2 = 0 < iVar10;
      iVar10 = iVar8;
      puVar6 = puVar11 + 4;
    } while (iVar8 != 0 && bVar2);
    puVar6 = puVar11 + iVar4 + -0x13c;
    iVar10 = iVar9 + -1;
    bVar2 = 0 < iVar9;
    iVar9 = iVar10;
  } while (iVar10 != 0 && bVar2);
  vid_UnlockPrimary();
  vid_UnlockOTW();
  return;
}

