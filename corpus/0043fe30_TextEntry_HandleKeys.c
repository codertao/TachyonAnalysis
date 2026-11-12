
/* sweep: guess */

void TextEntry_HandleKeys(undefined4 param_1,int *param_2,uint param_3,int param_4,int param_5)

{
  char cVar1;
  int *piVar2;
  uint3 uVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined4 *puVar10;
  int local_10;
  undefined1 local_c [4];
  int local_8;
  undefined1 uStack_4;
  
  piVar2 = param_2;
  do {
    do {
      do {
        while( true ) {
          if ((piVar2 == (int *)0x0) || (*piVar2 == 0)) {
            return;
          }
          local_8 = some_iter_over_list();
          if (local_8 == 0) {
            return;
          }
          Ui_RefreshWindow(param_1,param_5 + 0x40,0,0);
          uVar4 = uStack_4;
          iVar6 = local_8;
          uVar3 = local_8._1_3_;
          if (DAT_00561464 < 2) {
            uVar5 = *(ushort *)(PTR_DAT_00561258 + (local_8._1_3_ & 0xff) * 2) & 0x157;
          }
          else {
            uVar5 = Crt_isctype(local_8._1_3_ & 0xff,0x157);
          }
          if (uVar5 != 0) break;
          cVar1 = (char)local_8;
          if (((char)local_8 == '\b') || ((char)local_8 == '.')) {
            TextEntry_GetLength(param_5);
            if (*piVar2 != *(int *)(param_5 + 0xa4)) {
              *piVar2 = *piVar2 + -1;
            }
          }
          if (cVar1 == '\x1b') {
            puVar8 = &DAT_005a4b60;
            puVar10 = (undefined4 *)*piVar2;
            for (uVar5 = param_3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
              *puVar10 = *puVar8;
              puVar8 = puVar8 + 1;
              puVar10 = puVar10 + 1;
            }
            for (uVar5 = param_3 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
              *(undefined1 *)puVar10 = *(undefined1 *)puVar8;
              puVar8 = (undefined4 *)((int)puVar8 + 1);
              puVar10 = (undefined4 *)((int)puVar10 + 1);
            }
            if (*(code **)(param_5 + 0x90) != (code *)0x0) {
              (**(code **)(param_5 + 0x90))(&param_5);
            }
          }
          if ((cVar1 == '\r') && (*(code **)(param_5 + 0x90) != (code *)0x0)) {
            (**(code **)(param_5 + 0x90))(&param_5);
          }
        }
      } while ((((param_4 != 0) && (bVar7 = (byte)((uint)iVar6 >> 8), bVar7 != 0x2e)) &&
               ((bVar7 < 0x30 || (0x39 < bVar7)))) ||
              (iVar6 = TextEntry_SetText(CONCAT13(uVar4,uVar3),param_3,param_5), iVar6 == 0));
      Mnu_DrawText(param_1,*(int *)(param_5 + 0xa0) + 0x80,*piVar2,&local_10,&param_2);
      Mnu_DrawText(param_1,*(int *)(param_5 + 0xa0) + 0x80,&DAT_0053fec0,local_c,&param_2);
    } while (local_10 < *(int *)(param_5 + 0x88) - *(int *)(param_5 + 0x80));
    uVar5 = 0xffffffff;
    pcVar9 = (char *)*piVar2;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    ((char *)*piVar2)[~uVar5 - 2] = '\0';
  } while( true );
}

