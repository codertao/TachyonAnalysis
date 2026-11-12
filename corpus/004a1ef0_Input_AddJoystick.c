
/* WARNING: Removing unreachable block (ram,0x004a2228) */
/* (kind 1 = DirectInput device, 2 = winmm joyId; name, product, ...) create device record, append
   to list 0x5640c4/0x5640c8 (count 0x5640cc); winmm path reads joyGetDevCaps */

int * Input_AddJoystick(int param_1,char *param_2,char *param_3,int *param_4,int param_5,
                       UINT_PTR param_6)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  MMRESULT MVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *unaff_ESI;
  char *pcVar9;
  char *pcVar10;
  int *piVar11;
  undefined4 *puVar12;
  bool bVar13;
  int *piStack_214;
  undefined4 uStack_210;
  int *piStack_20c;
  int *piStack_208;
  undefined4 uStack_1f4;
  int *piStack_1f0;
  undefined1 *puStack_1ec;
  int *piStack_1e8;
  int local_1c4 [12];
  undefined1 local_194 [384];
  int *piStack_14;
  
  if ((param_2 != (char *)0x0) && (param_3 != (char *)0x0)) {
    if (param_1 == 1) {
      if (((DAT_005640d4 != (int *)0x0) && (param_4 != (int *)0x0)) && (param_5 != 0)) {
        piVar5 = local_1c4;
        piStack_1e8 = DAT_005640d4;
        puStack_1ec = (undefined1 *)0x4a1f61;
        iVar3 = (**(code **)(*DAT_005640d4 + 0xc))();
        if (-1 < iVar3) {
          puStack_1ec = &stack0xfffffe28;
          piStack_1f0 = (int *)&DAT_0052ee68;
          iVar3 = (**(code **)*unaff_ESI)();
          (**(code **)(*piVar5 + 8))();
          if (-1 < iVar3) {
            iVar3 = (**(code **)(*piStack_1e8 + 0x2c))();
            if (-1 < iVar3) {
              piStack_208 = (int *)DAT_005640e0;
              piStack_20c = piStack_1f0;
              uStack_210 = 0x4a1fb2;
              iVar3 = (**(code **)(*piStack_1f0 + 0x34))();
              if (iVar3 < 0) {
                piStack_208 = (int *)0x4a1fc0;
                (**(code **)(*piStack_1f0 + 8))();
                return (int *)0x0;
              }
              uVar7 = 0xffffffff;
              pcVar9 = param_2;
              do {
                if (uVar7 == 0) break;
                uVar7 = uVar7 - 1;
                cVar1 = *pcVar9;
                pcVar9 = pcVar9 + 1;
              } while (cVar1 != '\0');
              uVar8 = 0xffffffff;
              pcVar9 = (char *)local_194._376_4_;
              do {
                if (uVar8 == 0) break;
                uVar8 = uVar8 - 1;
                cVar1 = *pcVar9;
                pcVar9 = pcVar9 + 1;
              } while (cVar1 != '\0');
              piStack_208 = (int *)0x4a1ff7;
              piVar4 = _malloc(~uVar7 + ~uVar8 + 0x6c);
              if (piVar4 != (int *)0x0) {
                uVar7 = 0xffffffff;
                piVar4[3] = (int)(piVar4 + 0x1b);
                pcVar9 = param_2;
                do {
                  if (uVar7 == 0) break;
                  uVar7 = uVar7 - 1;
                  cVar1 = *pcVar9;
                  pcVar9 = pcVar9 + 1;
                } while (cVar1 != '\0');
                piVar4[2] = 1;
                uVar8 = 0xffffffff;
                piVar4[4] = (int)piVar4 + ~uVar7 + 0x6c;
                do {
                  pcVar9 = param_2;
                  if (uVar8 == 0) break;
                  uVar8 = uVar8 - 1;
                  pcVar9 = param_2 + 1;
                  cVar1 = *param_2;
                  param_2 = pcVar9;
                } while (cVar1 != '\0');
                uVar8 = ~uVar8;
                pcVar9 = pcVar9 + -uVar8;
                pcVar10 = (char *)piVar4[3];
                for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
                  *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
                  pcVar9 = pcVar9 + 4;
                  pcVar10 = pcVar10 + 4;
                }
                for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
                  *pcVar10 = *pcVar9;
                  pcVar9 = pcVar9 + 1;
                  pcVar10 = pcVar10 + 1;
                }
                uVar7 = 0xffffffff;
                do {
                  pcVar9 = (char *)local_194._376_4_;
                  if (uVar7 == 0) break;
                  uVar7 = uVar7 - 1;
                  pcVar9 = (char *)(local_194._376_4_ + 1);
                  cVar1 = *(char *)local_194._376_4_;
                  local_194._376_4_ = pcVar9;
                } while (cVar1 != '\0');
                uVar7 = ~uVar7;
                pcVar9 = pcVar9 + -uVar7;
                pcVar10 = (char *)piVar4[4];
                for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
                  *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
                  pcVar9 = pcVar9 + 4;
                  pcVar10 = pcVar10 + 4;
                }
                for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
                  *pcVar10 = *pcVar9;
                  pcVar9 = pcVar9 + 1;
                  pcVar10 = pcVar10 + 1;
                }
                piVar4[5] = *param_4;
                piVar4[6] = param_4[1];
                piVar4[7] = param_4[2];
                piVar4[8] = param_4[3];
                piVar4[9] = *piStack_14;
                piVar4[10] = piStack_14[1];
                piVar4[0xb] = piStack_14[2];
                iVar3 = piStack_14[3];
                piVar4[0xd] = -1;
                piVar4[0xc] = iVar3;
                piVar4[0xe] = 0;
                piVar4[0x19] = (int)piStack_1f0;
                piVar4[0x1a] = 0;
                piStack_208 = (int *)0x4a20ce;
                Joy_ResetState();
                piVar11 = DAT_005640c8;
                piVar4[1] = (int)DAT_005640c8;
                *piVar4 = 0;
                piVar2 = piVar4;
                if (piVar11 != (int *)0x0) {
                  *piVar11 = (int)piVar4;
                  piVar2 = DAT_005640c4;
                }
                DAT_005640c4 = piVar2;
                piVar11 = piVar4;
                if (*piVar4 != 0) {
                  *(int **)(*piVar4 + 4) = piVar4;
                  piVar11 = DAT_005640c8;
                }
                DAT_005640c8 = piVar11;
                DAT_005640cc = DAT_005640cc + 1;
                piStack_1e8 = (int *)0x2c;
                piStack_208 = piStack_1f0;
                piStack_20c = (int *)0x4a2127;
                iVar3 = (**(code **)(*piStack_1f0 + 0xc))();
                if ((-1 < iVar3) && (((uint)puStack_1ec & 1) != 0)) {
                  piVar4[0xe] = piVar4[0xe] | 1;
                }
                if ((*(byte *)(piVar4 + 0xe) & 1) == 0) {
                  return piVar4;
                }
                piStack_20c = (int *)0x1;
                piStack_214 = local_1c4;
                local_1c4[0] = 0x13c;
                uStack_210 = 8;
                iVar3 = (**(code **)(*piVar5 + 0x38))();
                if (-1 < iVar3) {
                  piVar4[0xe] = piVar4[0xe] | 2;
                }
                piVar11 = piStack_208;
                iVar3 = (**(code **)(*piStack_208 + 0x38))(piStack_208,&stack0xfffffe2c,0x14,1);
                if (-1 < iVar3) {
                  piVar4[0xe] = piVar4[0xe] | 4;
                }
                iVar3 = (**(code **)(*piVar5 + 0x38))(piVar5,&stack0xfffffe1c,0x20,1);
                if (-1 < iVar3) {
                  piVar4[0xe] = piVar4[0xe] | 8;
                }
                uStack_1f4 = 0x13c;
                iVar3 = (**(code **)(*piVar11 + 0x38))(piVar11,&uStack_1f4,0x24,1);
                if (-1 < iVar3) {
                  piVar4[0xe] = piVar4[0xe] | 0x10;
                }
                iVar3 = (**(code **)(*piVar5 + 0x38))(piVar5,&stack0xfffffdfc,0x28);
                if (-1 < iVar3) {
                  piVar4[0xe] = piVar4[0xe] | 0x20;
                }
                piStack_214 = (int *)0x13c;
                iVar3 = (**(code **)(*piVar11 + 0x38))(piVar11,&piStack_214,0x2c,1);
                if (iVar3 < 0) {
                  return piVar4;
                }
                piVar4[0xe] = piVar4[0xe] | 0x40;
                return piVar4;
              }
            }
            piStack_208 = (int *)0x4a200a;
            (**(code **)(*piStack_1f0 + 8))();
          }
        }
      }
    }
    else if (param_1 == 2) {
      uVar7 = 0xffffffff;
      pcVar9 = param_2;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      uVar8 = 0xffffffff;
      pcVar9 = param_3;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      piVar5 = _malloc(~uVar7 + ~uVar8 + 0x6c);
      if (piVar5 != (int *)0x0) {
        uVar7 = 0xffffffff;
        piVar5[3] = (int)(piVar5 + 0x1b);
        pcVar9 = param_2;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          cVar1 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar1 != '\0');
        piVar5[2] = 2;
        uVar8 = 0xffffffff;
        piVar5[4] = (int)piVar5 + ~uVar7 + 0x6c;
        do {
          pcVar9 = param_2;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar9 = param_2 + 1;
          cVar1 = *param_2;
          param_2 = pcVar9;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        piVar4 = (int *)(pcVar9 + -uVar8);
        piVar11 = piVar5 + 0x1b;
        for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *piVar11 = *piVar4;
          piVar4 = piVar4 + 1;
          piVar11 = piVar11 + 1;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(char *)piVar11 = (char)*piVar4;
          piVar4 = (int *)((int)piVar4 + 1);
          piVar11 = (int *)((int)piVar11 + 1);
        }
        uVar7 = 0xffffffff;
        do {
          pcVar9 = param_3;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar9 = param_3 + 1;
          cVar1 = *param_3;
          param_3 = pcVar9;
        } while (cVar1 != '\0');
        uVar7 = ~uVar7;
        pcVar9 = pcVar9 + -uVar7;
        pcVar10 = (char *)piVar5[4];
        for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
          pcVar9 = pcVar9 + 4;
          pcVar10 = pcVar10 + 4;
        }
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pcVar10 = *pcVar9;
          pcVar9 = pcVar9 + 1;
          pcVar10 = pcVar10 + 1;
        }
        piVar5[5] = 0;
        piVar5[6] = 0;
        piVar5[7] = 0;
        piVar5[8] = 0;
        piVar5[9] = 0;
        piVar5[10] = 0;
        piVar5[0xb] = 0;
        piVar5[0xc] = 0;
        piVar5[5] = param_6;
        piVar5[9] = param_6;
        piVar5[0xd] = param_6;
        piVar5[0xe] = 0;
        piVar5[0x19] = 0;
        piVar5[0x1a] = 0;
        Joy_ResetState();
        piVar4 = DAT_005640c8;
        bVar13 = DAT_005640c8 != (int *)0x0;
        piVar5[1] = (int)DAT_005640c8;
        *piVar5 = 0;
        piVar11 = piVar5;
        if (bVar13) {
          *piVar4 = (int)piVar5;
          piVar11 = DAT_005640c4;
        }
        DAT_005640c4 = piVar11;
        piVar4 = piVar5;
        if (*piVar5 != 0) {
          *(int **)(*piVar5 + 4) = piVar5;
          piVar4 = DAT_005640c8;
        }
        DAT_005640c8 = piVar4;
        DAT_005640cc = DAT_005640cc + 1;
        puVar12 = (undefined4 *)local_194;
        for (iVar3 = 0x65; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar12 = 0;
          puVar12 = puVar12 + 1;
        }
        piStack_1e8 = (int *)0x4a2371;
        MVar6 = joyGetDevCapsA(param_6,(LPJOYCAPSA)local_194,0x194);
        if (MVar6 == 0) {
          uVar7 = piVar5[0xe];
          piVar5[0xe] = uVar7 | 1;
          if ((local_194[0x60] & 1) != 0) {
            piVar5[0xe] = uVar7 | 3;
          }
          if ((local_194[0x60] & 2) != 0) {
            piVar5[0xe] = piVar5[0xe] | 4;
          }
          if ((local_194[0x60] & 0x10) != 0) {
            piVar5[0xe] = piVar5[0xe] | 8;
          }
        }
        if ((*(byte *)(piVar5 + 0xe) & 1) != 0) {
          Input_PollJoystick();
          piVar5[0x1a] = 0x8000 - piVar5[0x12];
        }
        return piVar5;
      }
    }
  }
  return (int *)0x0;
}

