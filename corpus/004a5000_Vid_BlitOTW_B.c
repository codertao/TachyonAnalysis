
/* sweep: guess */

void Vid_BlitOTW_B(void)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  int *local_8;
  
  piVar9 = DAT_005640f8;
  uVar8 = DAT_00602334 * DAT_006022e0;
  local_8 = DAT_005640f8;
  iVar3 = vid_LockPrimary();
  uVar2 = DAT_006022e4;
  if ((iVar3 != 0) && (piVar9 != (int *)0x0)) {
    if ((DAT_00602338 & 0xff0000) == 0) {
      uVar7 = 0;
      if (DAT_006022e4 != 0) {
        do {
          piVar6 = (int *)(DAT_0060231c * uVar7 + iVar3);
          uVar5 = uVar8 >> 5;
          piVar9 = local_8;
          do {
            *piVar6 = *piVar9 << 8;
            piVar9 = piVar9 + 1;
            piVar6 = piVar6 + 1;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
          local_8 = (int *)((int)local_8 + (uVar8 >> 3));
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar2);
      }
    }
    else {
      uVar7 = 0;
      if (DAT_006022e4 != 0) {
        do {
          puVar4 = (undefined8 *)(DAT_0060231c * uVar7 + iVar3);
          uVar5 = uVar8 >> 7;
          piVar9 = local_8;
          do {
            uVar1 = *(undefined8 *)(piVar9 + 2);
            *puVar4 = *(undefined8 *)piVar9;
            puVar4[1] = uVar1;
            piVar9 = piVar9 + 4;
            puVar4 = puVar4 + 2;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
          local_8 = (int *)((int)local_8 + (uVar8 >> 3));
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar2);
      }
    }
    vid_UnlockPrimary();
  }
  return;
}

