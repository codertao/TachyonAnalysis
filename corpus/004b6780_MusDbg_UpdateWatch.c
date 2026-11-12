
/* refine: window mode: SetWindowTextA with formatted vars */

void MusDbg_UpdateWatch(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  uint uStack00000004;
  int in_stack_00001014;
  
  __chkstk();
  iVar3 = DAT_0066921c;
  if ((*(int *)(in_stack_00001014 + 4) != 0) && (DAT_0066921c != 0)) {
    uVar2 = *(undefined4 *)(in_stack_00001014 + 0xc);
    iVar4 = *(int *)(DAT_0066921c + 0x10c) + *(int *)(in_stack_00001014 + 4);
    pcVar8 = &stack0x00000010;
    uStack00000004 = 0;
    if (0 < *(int *)(DAT_0066921c + 0x110)) {
      do {
        pcVar5 = (char *)MusDbg_FormatVar(iVar4,uVar2,-((uStack00000004 & 3) != 3) & 0x14);
        uVar6 = 0xffffffff;
        pcVar9 = pcVar5;
        do {
          pcVar10 = pcVar9;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar10 = pcVar9 + 1;
          cVar1 = *pcVar9;
          pcVar9 = pcVar10;
        } while (cVar1 != '\0');
        uVar6 = ~uVar6;
        pcVar9 = pcVar10 + -uVar6;
        pcVar10 = pcVar8;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
          pcVar9 = pcVar9 + 4;
          pcVar10 = pcVar10 + 4;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar10 = *pcVar9;
          pcVar9 = pcVar9 + 1;
          pcVar10 = pcVar10 + 1;
        }
        uVar6 = 0xffffffff;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        pcVar8 = pcVar8 + (~uVar6 - 1);
        if ((uStack00000004 & 3) == 3) {
          *pcVar8 = '\r';
          pcVar8 = pcVar8 + 1;
          *pcVar8 = '\n';
        }
        else {
          *pcVar8 = '\t';
        }
        pcVar8 = pcVar8 + 1;
        iVar4 = iVar4 + *(int *)(iVar3 + 0x100);
        uStack00000004 = uStack00000004 + 1;
      } while ((int)uStack00000004 < *(int *)(iVar3 + 0x110));
    }
    *pcVar8 = '\0';
    SetWindowTextA(DAT_00669258,&stack0x00000010);
  }
  return;
}

