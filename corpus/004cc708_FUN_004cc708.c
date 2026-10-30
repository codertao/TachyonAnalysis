
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 __fastcall FUN_004cc708(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 in_EAX;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  char *pcVar17;
  char *pcVar18;
  char *pcVar19;
  char *pcVar20;
  char *pcVar21;
  char *pcVar22;
  char *pcVar23;
  char *pcVar24;
  char *pcVar25;
  char *pcVar26;
  char *pcVar27;
  char *pcVar28;
  char *pcVar29;
  char *pcVar30;
  char *pcVar31;
  char *pcVar32;
  char *pcVar33;
  char *pcVar34;
  char *pcVar35;
  char *pcVar36;
  char *pcVar37;
  char *pcVar38;
  char *pcVar39;
  char *pcVar40;
  char *pcVar41;
  char *pcVar42;
  char *pcVar43;
  char *pcVar44;
  char *pcVar45;
  char *pcVar46;
  char *pcVar47;
  char *pcVar48;
  char *pcVar49;
  char *pcVar50;
  char *pcVar51;
  char *pcVar52;
  uint3 uVar53;
  int iVar54;
  int iVar55;
  int iVar56;
  char *pcVar57;
  char *pcVar58;
  undefined4 *puVar59;
  
  FUN_004ce9f3();
  iVar54 = DAT_005f9d80;
  puVar59 = DAT_005f9d60;
  if (DAT_005f9d5c != 0) {
    for (; iVar54 != 0; iVar54 = iVar54 + -1) {
      *puVar59 = 0;
      puVar59 = puVar59 + 1;
    }
    return CONCAT44(param_2,in_EAX);
  }
  _DAT_004cc6fc = DAT_005f9d80;
  DAT_004cc6f4 = DAT_005f9d80 + 4U >> 2;
  _DAT_004cc6f8 = 4;
  do {
    iVar54 = _DAT_004cc6fc;
    _DAT_004cc6fc = _DAT_004cc6fc - DAT_004cc6f4;
    pcVar57 = DAT_004cc704;
    pcVar58 = DAT_004cc700;
    uVar3 = DAT_004cc6f4;
    if ((iVar54 < (int)DAT_004cc6f4) &&
       (uVar3 = DAT_004cc6f4 + _DAT_004cc6fc,
       uVar3 == 0 || SCARRY4(DAT_004cc6f4,_DAT_004cc6fc) != (int)uVar3 < 0)) break;
    do {
      _DAT_004cc6f0 = uVar3;
      uVar3 = DAT_004cabae + _DAT_004cabaa;
      if (CARRY4(DAT_004cabae,_DAT_004cabaa)) {
        iVar54 = DAT_004cafde * 0x40;
        if ((&DAT_004cac1a)[iVar54] == '\0') {
          _DAT_004caba6 = 0x400;
          DAT_004caba2 = &DAT_004c9401;
          _DAT_004cabaa = 0x1000;
          DAT_004cabd6 = 0x1000;
          DAT_004cabda = 0;
          uVar3 = 0xfff00400;
        }
        else {
          iVar56 = 0xe;
          do {
            (&DAT_004caba2)[iVar56] =
                 (undefined *)*(undefined4 *)(&DAT_004cabde + iVar56 * 4 + iVar54);
            bVar1 = 0 < iVar56;
            iVar56 = iVar56 + -1;
          } while (bVar1);
          (&DAT_004cac1a)[iVar54] = 0;
          DAT_004cafde = DAT_004cafde + 1 & 0xf;
          uVar3 = DAT_004cabae;
        }
      }
      uVar4 = (int)uVar3 >> 10 & 0xfffffffe;
      iVar56 = ((byte)DAT_004caba2[uVar4] - 0x80) * DAT_004cabc6;
      iVar54 = ((byte)DAT_004caba2[uVar4 + 1] - 0x80) * DAT_004cabca;
      uVar4 = DAT_004c940e + 0x12345678;
      DAT_004cabae = uVar3;
      if (0xedcba987 < DAT_004c940e) {
        if (DAT_004c942e != 0) {
          (*(code *)PTR_FUN_004cb47c)();
        }
        iVar55 = 0xe;
        do {
          (&DAT_004c9402)[iVar55] = (&DAT_004ca002)[iVar55];
          bVar1 = 0 < iVar55;
          iVar55 = iVar55 + -1;
        } while (bVar1);
        DAT_004c943e = 0;
        DAT_004ca032 = 0;
        if (DAT_004c9432 != '\0') {
          DAT_004cb478 = (DAT_004cb478 << 0xb | DAT_004cb478 >> 0x15) + DAT_004cb478 + 1;
          DAT_004c940e = DAT_004c940e + (DAT_004cb478 & 0x3fc00);
        }
        iRam004cc7d0 = DAT_004c940a;
        uRam004cc7e6 = DAT_004c9402;
        iVar55 = (DAT_004c9426 << ((&DAT_004cb370)[DAT_004c9426] & 0x1f)) >> 3;
        uRam004cc7f0 = *(undefined4 *)(&DAT_004dfdd0 + iVar55 * 8);
        uRam004cc7f4 = *(undefined4 *)(&DAT_004dfdd4 + iVar55 * 8);
        uVar53 = (uint3)((uint)*(undefined4 *)
                                (&DAT_004cb230 + (uint)(byte)(&DAT_004cb370)[DAT_004c9426] * 4) >> 8
                        );
        uRam004cc7f8 = (uint)uVar53 | CONCAT31(uVar53,uRam004cc7f8._3_1_) << 0x18;
        iVar55 = (DAT_004c942a << ((&DAT_004cb370)[DAT_004c942a] & 0x1f)) >> 3;
        uRam004cc7fd = *(undefined4 *)(&DAT_004dfdd0 + iVar55 * 8);
        uRam004cc801 = *(undefined4 *)(&DAT_004dfdd4 + iVar55 * 8);
        uVar53 = (uint3)((uint)*(undefined4 *)
                                (&DAT_004cb230 + (uint)(byte)(&DAT_004cb370)[DAT_004c942a] * 4) >> 8
                        );
        uRam004cc805 = (uint)uVar53 | CONCAT31(uVar53,uRam004cc805._3_1_) << 0x18;
        uVar4 = DAT_004c940e;
      }
      pcVar5 = (char *)((int)uVar4 >> 10);
      cVar2 = (char)pcVar5;
      DAT_004c940e = uVar4;
      *pcVar5 = *pcVar5 + cVar2;
      *pcVar5 = *pcVar5 + cVar2;
      *pcVar5 = *pcVar5 + cVar2;
      *pcVar5 = *pcVar5 + cVar2;
      pcVar6 = (char *)((int)pcVar5 * 4);
      cVar2 = (char)pcVar6;
      *pcVar6 = *pcVar6 + cVar2;
      *pcVar6 = *pcVar6 + cVar2;
      *pcVar6 = *pcVar6 + cVar2;
      *pcVar6 = *pcVar6 + cVar2;
      uVar3 = DAT_004c944e + 0x12345678;
      if (0xedcba987 < DAT_004c944e) {
        if (DAT_004c946e != 0) {
          (*(code *)PTR_FUN_004cb47c)();
        }
        iVar55 = 0xe;
        do {
          (&DAT_004c9442)[iVar55] = (&DAT_004ca03e)[iVar55];
          bVar1 = 0 < iVar55;
          iVar55 = iVar55 + -1;
        } while (bVar1);
        DAT_004c947e = 0;
        DAT_004ca06e = 0;
        if (DAT_004c9472 != '\0') {
          DAT_004cb478 = (DAT_004cb478 << 0xb | DAT_004cb478 >> 0x15) + DAT_004cb478 + 1;
          DAT_004c944e = DAT_004c944e + (DAT_004cb478 & 0x3fc00);
        }
        iRam004cc810 = DAT_004c944a;
        uRam004cc826 = DAT_004c9442;
        iVar55 = (DAT_004c9466 << ((&DAT_004cb370)[DAT_004c9466] & 0x1f)) >> 3;
        uRam004cc830 = *(undefined4 *)(&DAT_004dfdd0 + iVar55 * 8);
        uRam004cc834 = *(undefined4 *)(&DAT_004dfdd4 + iVar55 * 8);
        uVar53 = (uint3)((uint)*(undefined4 *)
                                (&DAT_004cb230 + (uint)(byte)(&DAT_004cb370)[DAT_004c9466] * 4) >> 8
                        );
        uRam004cc838 = (uint)uVar53 | CONCAT31(uVar53,uRam004cc838._3_1_) << 0x18;
        iVar55 = (DAT_004c946a << ((&DAT_004cb370)[DAT_004c946a] & 0x1f)) >> 3;
        uRam004cc83d = *(undefined4 *)(&DAT_004dfdd0 + iVar55 * 8);
        uRam004cc841 = *(undefined4 *)(&DAT_004dfdd4 + iVar55 * 8);
        uVar53 = (uint3)((uint)*(undefined4 *)
                                (&DAT_004cb230 + (uint)(byte)(&DAT_004cb370)[DAT_004c946a] * 4) >> 8
                        );
        uRam004cc845 = (uint)uVar53 | CONCAT31(uVar53,uRam004cc845._3_1_) << 0x18;
        uVar3 = DAT_004c944e;
      }
      pcVar7 = (char *)((int)uVar3 >> 10);
      cVar2 = (char)pcVar7;
      DAT_004c944e = uVar3;
      *pcVar7 = *pcVar7 + cVar2;
      *pcVar7 = *pcVar7 + cVar2;
      *pcVar7 = *pcVar7 + cVar2;
      *pcVar7 = *pcVar7 + cVar2;
      pcVar8 = (char *)((int)pcVar7 * 4);
      cVar2 = (char)pcVar8;
      *pcVar8 = *pcVar8 + cVar2;
      *pcVar8 = *pcVar8 + cVar2;
      *pcVar8 = *pcVar8 + cVar2;
      *pcVar8 = *pcVar8 + cVar2;
      uVar3 = DAT_004c948e + 0x12345678;
      if (0xedcba987 < DAT_004c948e) {
        if (DAT_004c94ae != 0) {
          (*(code *)PTR_FUN_004cb47c)();
        }
        iVar55 = 0xe;
        do {
          (&DAT_004c9482)[iVar55] = *(undefined4 *)(&DAT_004ca07a + iVar55 * 4);
          bVar1 = 0 < iVar55;
          iVar55 = iVar55 + -1;
        } while (bVar1);
        DAT_004c94be = 0;
        DAT_004ca0aa = 0;
        if (DAT_004c94b2 != '\0') {
          DAT_004cb478 = (DAT_004cb478 << 0xb | DAT_004cb478 >> 0x15) + DAT_004cb478 + 1;
          DAT_004c948e = DAT_004c948e + (DAT_004cb478 & 0x3fc00);
        }
        iRam004cc850 = DAT_004c948a;
        uRam004cc866 = DAT_004c9482;
        iVar55 = (DAT_004c94a6 << ((&DAT_004cb370)[DAT_004c94a6] & 0x1f)) >> 3;
        uRam004cc870 = *(undefined4 *)(&DAT_004dfdd0 + iVar55 * 8);
        uRam004cc874 = *(undefined4 *)(&DAT_004dfdd4 + iVar55 * 8);
        uVar53 = (uint3)((uint)*(undefined4 *)
                                (&DAT_004cb230 + (uint)(byte)(&DAT_004cb370)[DAT_004c94a6] * 4) >> 8
                        );
        uRam004cc878 = (uint)uVar53 | CONCAT31(uVar53,uRam004cc878._3_1_) << 0x18;
        iVar55 = (DAT_004c94aa << ((&DAT_004cb370)[DAT_004c94aa] & 0x1f)) >> 3;
        uRam004cc87d = *(undefined4 *)(&DAT_004dfdd0 + iVar55 * 8);
        uRam004cc881 = *(undefined4 *)(&DAT_004dfdd4 + iVar55 * 8);
        uVar53 = (uint3)((uint)*(undefined4 *)
                                (&DAT_004cb230 + (uint)(byte)(&DAT_004cb370)[DAT_004c94aa] * 4) >> 8
                        );
        uRam004cc885 = (uint)uVar53 | CONCAT31(uVar53,uRam004cc885._3_1_) << 0x18;
        uVar3 = DAT_004c948e;
      }
      pcVar9 = (char *)((int)uVar3 >> 10);
      cVar2 = (char)pcVar9;
      DAT_004c948e = uVar3;
      *pcVar9 = *pcVar9 + cVar2;
      *pcVar9 = *pcVar9 + cVar2;
      *pcVar9 = *pcVar9 + cVar2;
      *pcVar9 = *pcVar9 + cVar2;
      pcVar10 = (char *)((int)pcVar9 * 4);
      cVar2 = (char)pcVar10;
      *pcVar10 = *pcVar10 + cVar2;
      *pcVar10 = *pcVar10 + cVar2;
      *pcVar10 = *pcVar10 + cVar2;
      *pcVar10 = *pcVar10 + cVar2;
      uVar3 = DAT_004c94ce + 0x12345678;
      if (0xedcba987 < DAT_004c94ce) {
        if (DAT_004c94ee != 0) {
          (*(code *)PTR_FUN_004cb47c)();
        }
        iVar55 = 0xe;
        do {
          (&DAT_004c94c2)[iVar55] = *(undefined4 *)(&DAT_004ca0b6 + iVar55 * 4);
          bVar1 = 0 < iVar55;
          iVar55 = iVar55 + -1;
        } while (bVar1);
        DAT_004c94fe = 0;
        DAT_004ca0e6 = 0;
        if (DAT_004c94f2 != '\0') {
          DAT_004cb478 = (DAT_004cb478 << 0xb | DAT_004cb478 >> 0x15) + DAT_004cb478 + 1;
          DAT_004c94ce = DAT_004c94ce + (DAT_004cb478 & 0x3fc00);
        }
        iRam004cc890 = DAT_004c94ca;
        uRam004cc8a6 = DAT_004c94c2;
        iVar55 = (DAT_004c94e6 << ((&DAT_004cb370)[DAT_004c94e6] & 0x1f)) >> 3;
        uRam004cc8b0 = *(undefined4 *)(&DAT_004dfdd0 + iVar55 * 8);
        uRam004cc8b4 = *(undefined4 *)(&DAT_004dfdd4 + iVar55 * 8);
        uVar53 = (uint3)((uint)*(undefined4 *)
                                (&DAT_004cb230 + (uint)(byte)(&DAT_004cb370)[DAT_004c94e6] * 4) >> 8
                        );
        uRam004cc8b8 = (uint)uVar53 | CONCAT31(uVar53,uRam004cc8b8._3_1_) << 0x18;
        iVar55 = (DAT_004c94ea << ((&DAT_004cb370)[DAT_004c94ea] & 0x1f)) >> 3;
        uRam004cc8bd = *(undefined4 *)(&DAT_004dfdd0 + iVar55 * 8);
        uRam004cc8c1 = *(undefined4 *)(&DAT_004dfdd4 + iVar55 * 8);
        uVar53 = (uint3)((uint)*(undefined4 *)
                                (&DAT_004cb230 + (uint)(byte)(&DAT_004cb370)[DAT_004c94ea] * 4) >> 8
                        );
        uRam004cc8c5 = (uint)uVar53 | CONCAT31(uVar53,uRam004cc8c5._3_1_) << 0x18;
        uVar3 = DAT_004c94ce;
      }
      pcVar11 = (char *)((int)uVar3 >> 10);
      cVar2 = (char)pcVar11;
      DAT_004c94ce = uVar3;
      *pcVar11 = *pcVar11 + cVar2;
      *pcVar11 = *pcVar11 + cVar2;
      *pcVar11 = *pcVar11 + cVar2;
      *pcVar11 = *pcVar11 + cVar2;
      pcVar12 = (char *)((int)pcVar11 * 4);
      cVar2 = (char)pcVar12;
      *pcVar12 = *pcVar12 + cVar2;
      *pcVar12 = *pcVar12 + cVar2;
      *pcVar12 = *pcVar12 + cVar2;
      *pcVar12 = *pcVar12 + cVar2;
      uVar3 = DAT_004c950e + 0x12345678;
      if (0xedcba987 < DAT_004c950e) {
        if (DAT_004c952e != 0) {
          (*(code *)PTR_FUN_004cb47c)();
        }
        iVar55 = 0xe;
        do {
          (&DAT_004c9502)[iVar55] = *(undefined4 *)(&DAT_004ca0f2 + iVar55 * 4);
          bVar1 = 0 < iVar55;
          iVar55 = iVar55 + -1;
        } while (bVar1);
        DAT_004c953e = 0;
        DAT_004ca122 = 0;
        if (DAT_004c9532 != '\0') {
          DAT_004cb478 = (DAT_004cb478 << 0xb | DAT_004cb478 >> 0x15) + DAT_004cb478 + 1;
          DAT_004c950e = DAT_004c950e + (DAT_004cb478 & 0x3fc00);
        }
        iRam004cc8d0 = DAT_004c950a;
        uRam004cc8e6 = DAT_004c9502;
        iVar55 = (DAT_004c9526 << ((&DAT_004cb370)[DAT_004c9526] & 0x1f)) >> 3;
        uRam004cc8f0 = *(undefined4 *)(&DAT_004dfdd0 + iVar55 * 8);
        uRam004cc8f4 = *(undefined4 *)(&DAT_004dfdd4 + iVar55 * 8);
        uVar53 = (uint3)((uint)*(undefined4 *)
                                (&DAT_004cb230 + (uint)(byte)(&DAT_004cb370)[DAT_004c9526] * 4) >> 8
                        );
        uRam004cc8f8 = (uint)uVar53 | CONCAT31(uVar53,uRam004cc8f8._3_1_) << 0x18;
        iVar55 = (DAT_004c952a << ((&DAT_004cb370)[DAT_004c952a] & 0x1f)) >> 3;
        uRam004cc8fd = *(undefined4 *)(&DAT_004dfdd0 + iVar55 * 8);
        uRam004cc901 = *(undefined4 *)(&DAT_004dfdd4 + iVar55 * 8);
        uVar53 = (uint3)((uint)*(undefined4 *)
                                (&DAT_004cb230 + (uint)(byte)(&DAT_004cb370)[DAT_004c952a] * 4) >> 8
                        );
        uRam004cc905 = (uint)uVar53 | CONCAT31(uVar53,uRam004cc905._3_1_) << 0x18;
        uVar3 = DAT_004c950e;
      }
      pcVar13 = (char *)((int)uVar3 >> 10);
      cVar2 = (char)pcVar13;
      DAT_004c950e = uVar3;
      *pcVar13 = *pcVar13 + cVar2;
      *pcVar13 = *pcVar13 + cVar2;
      *pcVar13 = *pcVar13 + cVar2;
      *pcVar13 = *pcVar13 + cVar2;
      pcVar14 = (char *)((int)pcVar13 * 4);
      cVar2 = (char)pcVar14;
      *pcVar14 = *pcVar14 + cVar2;
      *pcVar14 = *pcVar14 + cVar2;
      *pcVar14 = *pcVar14 + cVar2;
      *pcVar14 = *pcVar14 + cVar2;
      uVar3 = DAT_004c954e + 0x12345678;
      if (0xedcba987 < DAT_004c954e) {
        if (DAT_004c956e != 0) {
          (*(code *)PTR_FUN_004cb47c)();
        }
        iVar55 = 0xe;
        do {
          (&DAT_004c9542)[iVar55] = *(undefined4 *)(&DAT_004ca12e + iVar55 * 4);
          bVar1 = 0 < iVar55;
          iVar55 = iVar55 + -1;
        } while (bVar1);
        DAT_004c957e = 0;
        DAT_004ca15e = 0;
        if (DAT_004c9572 != '\0') {
          DAT_004cb478 = (DAT_004cb478 << 0xb | DAT_004cb478 >> 0x15) + DAT_004cb478 + 1;
          DAT_004c954e = DAT_004c954e + (DAT_004cb478 & 0x3fc00);
        }
        iRam004cc910 = DAT_004c954a;
        uRam004cc926 = DAT_004c9542;
        iVar55 = (DAT_004c9566 << ((&DAT_004cb370)[DAT_004c9566] & 0x1f)) >> 3;
        uRam004cc930 = *(undefined4 *)(&DAT_004dfdd0 + iVar55 * 8);
        uRam004cc934 = *(undefined4 *)(&DAT_004dfdd4 + iVar55 * 8);
        uVar53 = (uint3)((uint)*(undefined4 *)
                                (&DAT_004cb230 + (uint)(byte)(&DAT_004cb370)[DAT_004c9566] * 4) >> 8
                        );
        uRam004cc938 = (uint)uVar53 | CONCAT31(uVar53,uRam004cc938._3_1_) << 0x18;
        iVar55 = (DAT_004c956a << ((&DAT_004cb370)[DAT_004c956a] & 0x1f)) >> 3;
        uRam004cc93d = *(undefined4 *)(&DAT_004dfdd0 + iVar55 * 8);
        uRam004cc941 = *(undefined4 *)(&DAT_004dfdd4 + iVar55 * 8);
        uVar53 = (uint3)((uint)*(undefined4 *)
                                (&DAT_004cb230 + (uint)(byte)(&DAT_004cb370)[DAT_004c956a] * 4) >> 8
                        );
        uRam004cc945 = (uint)uVar53 | CONCAT31(uVar53,uRam004cc945._3_1_) << 0x18;
        uVar3 = DAT_004c954e;
      }
      pcVar15 = (char *)((int)uVar3 >> 10);
      cVar2 = (char)pcVar15;
      DAT_004c954e = uVar3;
      *pcVar15 = *pcVar15 + cVar2;
      *pcVar15 = *pcVar15 + cVar2;
      *pcVar15 = *pcVar15 + cVar2;
      *pcVar15 = *pcVar15 + cVar2;
      pcVar16 = (char *)((int)pcVar15 * 4);
      cVar2 = (char)pcVar16;
      *pcVar16 = *pcVar16 + cVar2;
      *pcVar16 = *pcVar16 + cVar2;
      *pcVar16 = *pcVar16 + cVar2;
      *pcVar16 = *pcVar16 + cVar2;
      uVar3 = DAT_004c958e + 0x12345678;
      if (0xedcba987 < DAT_004c958e) {
        if (DAT_004c95ae != 0) {
          (*(code *)PTR_FUN_004cb47c)();
        }
        iVar55 = 0xe;
        do {
          (&DAT_004c9582)[iVar55] = *(undefined4 *)(&DAT_004ca16a + iVar55 * 4);
          bVar1 = 0 < iVar55;
          iVar55 = iVar55 + -1;
        } while (bVar1);
        DAT_004c95be = 0;
        DAT_004ca19a = 0;
        if (DAT_004c95b2 != '\0') {
          DAT_004cb478 = (DAT_004cb478 << 0xb | DAT_004cb478 >> 0x15) + DAT_004cb478 + 1;
          DAT_004c958e = DAT_004c958e + (DAT_004cb478 & 0x3fc00);
        }
        iRam004cc950 = DAT_004c958a;
        uRam004cc966 = DAT_004c9582;
        iVar55 = (DAT_004c95a6 << ((&DAT_004cb370)[DAT_004c95a6] & 0x1f)) >> 3;
        uRam004cc970 = *(undefined4 *)(&DAT_004dfdd0 + iVar55 * 8);
        uRam004cc974 = *(undefined4 *)(&DAT_004dfdd4 + iVar55 * 8);
        uVar53 = (uint3)((uint)*(undefined4 *)
                                (&DAT_004cb230 + (uint)(byte)(&DAT_004cb370)[DAT_004c95a6] * 4) >> 8
                        );
        uRam004cc978 = (uint)uVar53 | CONCAT31(uVar53,uRam004cc978._3_1_) << 0x18;
        iVar55 = (DAT_004c95aa << ((&DAT_004cb370)[DAT_004c95aa] & 0x1f)) >> 3;
        uRam004cc97d = *(undefined4 *)(&DAT_004dfdd0 + iVar55 * 8);
        uRam004cc981 = *(undefined4 *)(&DAT_004dfdd4 + iVar55 * 8);
        uVar53 = (uint3)((uint)*(undefined4 *)
                                (&DAT_004cb230 + (uint)(byte)(&DAT_004cb370)[DAT_004c95aa] * 4) >> 8
                        );
        uRam004cc985 = (uint)uVar53 | CONCAT31(uVar53,uRam004cc985._3_1_) << 0x18;
        uVar3 = DAT_004c958e;
      }
      pcVar17 = (char *)((int)uVar3 >> 10);
      cVar2 = (char)pcVar17;
      DAT_004c958e = uVar3;
      *pcVar17 = *pcVar17 + cVar2;
      *pcVar17 = *pcVar17 + cVar2;
      *pcVar17 = *pcVar17 + cVar2;
      *pcVar17 = *pcVar17 + cVar2;
      pcVar18 = (char *)((int)pcVar17 * 4);
      cVar2 = (char)pcVar18;
      *pcVar18 = *pcVar18 + cVar2;
      *pcVar18 = *pcVar18 + cVar2;
      *pcVar18 = *pcVar18 + cVar2;
      *pcVar18 = *pcVar18 + cVar2;
      uVar3 = DAT_004c95ce + 0x12345678;
      if (0xedcba987 < DAT_004c95ce) {
        if (DAT_004c95ee != 0) {
          (*(code *)PTR_FUN_004cb47c)();
        }
        iVar55 = 0xe;
        do {
          (&DAT_004c95c2)[iVar55] = *(undefined4 *)(&DAT_004ca1a6 + iVar55 * 4);
          bVar1 = 0 < iVar55;
          iVar55 = iVar55 + -1;
        } while (bVar1);
        DAT_004c95fe = 0;
        DAT_004ca1d6 = 0;
        if (DAT_004c95f2 != '\0') {
          DAT_004cb478 = (DAT_004cb478 << 0xb | DAT_004cb478 >> 0x15) + DAT_004cb478 + 1;
          DAT_004c95ce = DAT_004c95ce + (DAT_004cb478 & 0x3fc00);
        }
        iRam004cc990 = DAT_004c95ca;
        uRam004cc9a6 = DAT_004c95c2;
        iVar55 = (DAT_004c95e6 << ((&DAT_004cb370)[DAT_004c95e6] & 0x1f)) >> 3;
        uRam004cc9b0 = *(undefined4 *)(&DAT_004dfdd0 + iVar55 * 8);
        uRam004cc9b4 = *(undefined4 *)(&DAT_004dfdd4 + iVar55 * 8);
        uVar53 = (uint3)((uint)*(undefined4 *)
                                (&DAT_004cb230 + (uint)(byte)(&DAT_004cb370)[DAT_004c95e6] * 4) >> 8
                        );
        uRam004cc9b8 = (uint)uVar53 | CONCAT31(uVar53,uRam004cc9b8._3_1_) << 0x18;
        iVar55 = (DAT_004c95ea << ((&DAT_004cb370)[DAT_004c95ea] & 0x1f)) >> 3;
        uRam004cc9bd = *(undefined4 *)(&DAT_004dfdd0 + iVar55 * 8);
        uRam004cc9c1 = *(undefined4 *)(&DAT_004dfdd4 + iVar55 * 8);
        uVar53 = (uint3)((uint)*(undefined4 *)
                                (&DAT_004cb230 + (uint)(byte)(&DAT_004cb370)[DAT_004c95ea] * 4) >> 8
                        );
        uRam004cc9c5 = (uint)uVar53 | CONCAT31(uVar53,uRam004cc9c5._3_1_) << 0x18;
        uVar3 = DAT_004c95ce;
      }
      pcVar19 = (char *)((int)uVar3 >> 10);
      cVar2 = (char)pcVar19;
      DAT_004c95ce = uVar3;
      *pcVar19 = *pcVar19 + cVar2;
      *pcVar19 = *pcVar19 + cVar2;
      *pcVar19 = *pcVar19 + cVar2;
      *pcVar19 = *pcVar19 + cVar2;
      pcVar20 = (char *)((int)pcVar19 * 4);
      cVar2 = (char)pcVar20;
      *pcVar20 = *pcVar20 + cVar2;
      *pcVar20 = *pcVar20 + cVar2;
      *pcVar20 = *pcVar20 + cVar2;
      *pcVar20 = *pcVar20 + cVar2;
      uVar3 = DAT_004c960e + 0x12345678;
      if (0xedcba987 < DAT_004c960e) {
        if (DAT_004c962e != 0) {
          (*(code *)PTR_FUN_004cb47c)();
        }
        iVar55 = 0xe;
        do {
          (&DAT_004c9602)[iVar55] = *(undefined4 *)(&DAT_004ca1e2 + iVar55 * 4);
          bVar1 = 0 < iVar55;
          iVar55 = iVar55 + -1;
        } while (bVar1);
        DAT_004c963e = 0;
        DAT_004ca212 = 0;
        if (DAT_004c9632 != '\0') {
          DAT_004cb478 = (DAT_004cb478 << 0xb | DAT_004cb478 >> 0x15) + DAT_004cb478 + 1;
          DAT_004c960e = DAT_004c960e + (DAT_004cb478 & 0x3fc00);
        }
        iRam004cc9d0 = DAT_004c960a;
        uRam004cc9e6 = DAT_004c9602;
        iVar55 = (DAT_004c9626 << ((&DAT_004cb370)[DAT_004c9626] & 0x1f)) >> 3;
        uRam004cc9f0 = *(undefined4 *)(&DAT_004dfdd0 + iVar55 * 8);
        uRam004cc9f4 = *(undefined4 *)(&DAT_004dfdd4 + iVar55 * 8);
        uVar53 = (uint3)((uint)*(undefined4 *)
                                (&DAT_004cb230 + (uint)(byte)(&DAT_004cb370)[DAT_004c9626] * 4) >> 8
                        );
        uRam004cc9f8 = (uint)uVar53 | CONCAT31(uVar53,uRam004cc9f8._3_1_) << 0x18;
        iVar55 = (DAT_004c962a << ((&DAT_004cb370)[DAT_004c962a] & 0x1f)) >> 3;
        uRam004cc9fd = *(undefined4 *)(&DAT_004dfdd0 + iVar55 * 8);
        uRam004cca01 = *(undefined4 *)(&DAT_004dfdd4 + iVar55 * 8);
        uVar53 = (uint3)((uint)*(undefined4 *)
                                (&DAT_004cb230 + (uint)(byte)(&DAT_004cb370)[DAT_004c962a] * 4) >> 8
                        );
        uRam004cca05 = (uint)uVar53 | CONCAT31(uVar53,uRam004cca05._3_1_) << 0x18;
        uVar3 = DAT_004c960e;
      }
      pcVar21 = (char *)((int)uVar3 >> 10);
      cVar2 = (char)pcVar21;
      DAT_004c960e = uVar3;
      *pcVar21 = *pcVar21 + cVar2;
      *pcVar21 = *pcVar21 + cVar2;
      *pcVar21 = *pcVar21 + cVar2;
      *pcVar21 = *pcVar21 + cVar2;
      pcVar22 = (char *)((int)pcVar21 * 4);
      cVar2 = (char)pcVar22;
      *pcVar22 = *pcVar22 + cVar2;
      *pcVar22 = *pcVar22 + cVar2;
      *pcVar22 = *pcVar22 + cVar2;
      *pcVar22 = *pcVar22 + cVar2;
      uVar3 = DAT_004c964e + 0x12345678;
      if (0xedcba987 < DAT_004c964e) {
        if (DAT_004c966e != 0) {
          (*(code *)PTR_FUN_004cb47c)();
        }
        iVar55 = 0xe;
        do {
          (&DAT_004c9642)[iVar55] = *(undefined4 *)(&DAT_004ca21e + iVar55 * 4);
          bVar1 = 0 < iVar55;
          iVar55 = iVar55 + -1;
        } while (bVar1);
        DAT_004c967e = 0;
        DAT_004ca24e = 0;
        if (DAT_004c9672 != '\0') {
          DAT_004cb478 = (DAT_004cb478 << 0xb | DAT_004cb478 >> 0x15) + DAT_004cb478 + 1;
          DAT_004c964e = DAT_004c964e + (DAT_004cb478 & 0x3fc00);
        }
        iRam004cca10 = DAT_004c964a;
        uRam004cca26 = DAT_004c9642;
        iVar55 = (DAT_004c9666 << ((&DAT_004cb370)[DAT_004c9666] & 0x1f)) >> 3;
        uRam004cca30 = *(undefined4 *)(&DAT_004dfdd0 + iVar55 * 8);
        uRam004cca34 = *(undefined4 *)(&DAT_004dfdd4 + iVar55 * 8);
        uVar53 = (uint3)((uint)*(undefined4 *)
                                (&DAT_004cb230 + (uint)(byte)(&DAT_004cb370)[DAT_004c9666] * 4) >> 8
                        );
        uRam004cca38 = (uint)uVar53 | CONCAT31(uVar53,uRam004cca38._3_1_) << 0x18;
        iVar55 = (DAT_004c966a << ((&DAT_004cb370)[DAT_004c966a] & 0x1f)) >> 3;
        uRam004cca3d = *(undefined4 *)(&DAT_004dfdd0 + iVar55 * 8);
        uRam004cca41 = *(undefined4 *)(&DAT_004dfdd4 + iVar55 * 8);
        uVar53 = (uint3)((uint)*(undefined4 *)
                                (&DAT_004cb230 + (uint)(byte)(&DAT_004cb370)[DAT_004c966a] * 4) >> 8
                        );
        uRam004cca45 = (uint)uVar53 | CONCAT31(uVar53,uRam004cca45._3_1_) << 0x18;
        uVar3 = DAT_004c964e;
      }
      pcVar23 = (char *)((int)uVar3 >> 10);
      cVar2 = (char)pcVar23;
      DAT_004c964e = uVar3;
      *pcVar23 = *pcVar23 + cVar2;
      *pcVar23 = *pcVar23 + cVar2;
      *pcVar23 = *pcVar23 + cVar2;
      *pcVar23 = *pcVar23 + cVar2;
      pcVar24 = (char *)((int)pcVar23 * 4);
      cVar2 = (char)pcVar24;
      *pcVar24 = *pcVar24 + cVar2;
      *pcVar24 = *pcVar24 + cVar2;
      *pcVar24 = *pcVar24 + cVar2;
      *pcVar24 = *pcVar24 + cVar2;
      uVar3 = DAT_004c968e + 0x12345678;
      if (0xedcba987 < DAT_004c968e) {
        if (DAT_004c96ae != 0) {
          (*(code *)PTR_FUN_004cb47c)();
        }
        iVar55 = 0xe;
        do {
          (&DAT_004c9682)[iVar55] = *(undefined4 *)(&DAT_004ca25a + iVar55 * 4);
          bVar1 = 0 < iVar55;
          iVar55 = iVar55 + -1;
        } while (bVar1);
        DAT_004c96be = 0;
        DAT_004ca28a = 0;
        if (DAT_004c96b2 != '\0') {
          DAT_004cb478 = (DAT_004cb478 << 0xb | DAT_004cb478 >> 0x15) + DAT_004cb478 + 1;
          DAT_004c968e = DAT_004c968e + (DAT_004cb478 & 0x3fc00);
        }
        iRam004cca50 = DAT_004c968a;
        uRam004cca66 = DAT_004c9682;
        iVar55 = (DAT_004c96a6 << ((&DAT_004cb370)[DAT_004c96a6] & 0x1f)) >> 3;
        uRam004cca70 = *(undefined4 *)(&DAT_004dfdd0 + iVar55 * 8);
        uRam004cca74 = *(undefined4 *)(&DAT_004dfdd4 + iVar55 * 8);
        uVar53 = (uint3)((uint)*(undefined4 *)
                                (&DAT_004cb230 + (uint)(byte)(&DAT_004cb370)[DAT_004c96a6] * 4) >> 8
                        );
        uRam004cca78 = (uint)uVar53 | CONCAT31(uVar53,uRam004cca78._3_1_) << 0x18;
        iVar55 = (DAT_004c96aa << ((&DAT_004cb370)[DAT_004c96aa] & 0x1f)) >> 3;
        uRam004cca7d = *(undefined4 *)(&DAT_004dfdd0 + iVar55 * 8);
        uRam004cca81 = *(undefined4 *)(&DAT_004dfdd4 + iVar55 * 8);
        uVar53 = (uint3)((uint)*(undefined4 *)
                                (&DAT_004cb230 + (uint)(byte)(&DAT_004cb370)[DAT_004c96aa] * 4) >> 8
                        );
        uRam004cca85 = (uint)uVar53 | CONCAT31(uVar53,uRam004cca85._3_1_) << 0x18;
        uVar3 = DAT_004c968e;
      }
      pcVar25 = (char *)((int)uVar3 >> 10);
      cVar2 = (char)pcVar25;
      DAT_004c968e = uVar3;
      *pcVar25 = *pcVar25 + cVar2;
      *pcVar25 = *pcVar25 + cVar2;
      *pcVar25 = *pcVar25 + cVar2;
      *pcVar25 = *pcVar25 + cVar2;
      pcVar26 = (char *)((int)pcVar25 * 4);
      cVar2 = (char)pcVar26;
      *pcVar26 = *pcVar26 + cVar2;
      *pcVar26 = *pcVar26 + cVar2;
      *pcVar26 = *pcVar26 + cVar2;
      *pcVar26 = *pcVar26 + cVar2;
      uVar3 = DAT_004c96ce + 0x12345678;
      if (0xedcba987 < DAT_004c96ce) {
        if (DAT_004c96ee != 0) {
          (*(code *)PTR_FUN_004cb47c)();
        }
        iVar55 = 0xe;
        do {
          (&DAT_004c96c2)[iVar55] = *(undefined4 *)(&DAT_004ca296 + iVar55 * 4);
          bVar1 = 0 < iVar55;
          iVar55 = iVar55 + -1;
        } while (bVar1);
        DAT_004c96fe = 0;
        DAT_004ca2c6 = 0;
        if (DAT_004c96f2 != '\0') {
          DAT_004cb478 = (DAT_004cb478 << 0xb | DAT_004cb478 >> 0x15) + DAT_004cb478 + 1;
          DAT_004c96ce = DAT_004c96ce + (DAT_004cb478 & 0x3fc00);
        }
        iRam004cca90 = DAT_004c96ca;
        uRam004ccaa6 = DAT_004c96c2;
        iVar55 = (DAT_004c96e6 << ((&DAT_004cb370)[DAT_004c96e6] & 0x1f)) >> 3;
        uRam004ccab0 = *(undefined4 *)(&DAT_004dfdd0 + iVar55 * 8);
        uRam004ccab4 = *(undefined4 *)(&DAT_004dfdd4 + iVar55 * 8);
        uVar53 = (uint3)((uint)*(undefined4 *)
                                (&DAT_004cb230 + (uint)(byte)(&DAT_004cb370)[DAT_004c96e6] * 4) >> 8
                        );
        uRam004ccab8 = (uint)uVar53 | CONCAT31(uVar53,uRam004ccab8._3_1_) << 0x18;
        iVar55 = (DAT_004c96ea << ((&DAT_004cb370)[DAT_004c96ea] & 0x1f)) >> 3;
        uRam004ccabd = *(undefined4 *)(&DAT_004dfdd0 + iVar55 * 8);
        uRam004ccac1 = *(undefined4 *)(&DAT_004dfdd4 + iVar55 * 8);
        uVar53 = (uint3)((uint)*(undefined4 *)
                                (&DAT_004cb230 + (uint)(byte)(&DAT_004cb370)[DAT_004c96ea] * 4) >> 8
                        );
        uRam004ccac5 = (uint)uVar53 | CONCAT31(uVar53,uRam004ccac5._3_1_) << 0x18;
        uVar3 = DAT_004c96ce;
      }
      pcVar27 = (char *)((int)uVar3 >> 10);
      cVar2 = (char)pcVar27;
      DAT_004c96ce = uVar3;
      *pcVar27 = *pcVar27 + cVar2;
      *pcVar27 = *pcVar27 + cVar2;
      *pcVar27 = *pcVar27 + cVar2;
      *pcVar27 = *pcVar27 + cVar2;
      pcVar28 = (char *)((int)pcVar27 * 4);
      cVar2 = (char)pcVar28;
      *pcVar28 = *pcVar28 + cVar2;
      *pcVar28 = *pcVar28 + cVar2;
      *pcVar28 = *pcVar28 + cVar2;
      *pcVar28 = *pcVar28 + cVar2;
      uVar3 = DAT_004c970e + 0x12345678;
      if (0xedcba987 < DAT_004c970e) {
        if (DAT_004c972e != 0) {
          (*(code *)PTR_FUN_004cb47c)();
        }
        iVar55 = 0xe;
        do {
          (&DAT_004c9702)[iVar55] = *(undefined4 *)(&DAT_004ca2d2 + iVar55 * 4);
          bVar1 = 0 < iVar55;
          iVar55 = iVar55 + -1;
        } while (bVar1);
        DAT_004c973e = 0;
        DAT_004ca302 = 0;
        if (DAT_004c9732 != '\0') {
          DAT_004cb478 = (DAT_004cb478 << 0xb | DAT_004cb478 >> 0x15) + DAT_004cb478 + 1;
          DAT_004c970e = DAT_004c970e + (DAT_004cb478 & 0x3fc00);
        }
        iRam004ccad0 = DAT_004c970a;
        uRam004ccae6 = DAT_004c9702;
        iVar55 = (DAT_004c9726 << ((&DAT_004cb370)[DAT_004c9726] & 0x1f)) >> 3;
        uRam004ccaf0 = *(undefined4 *)(&DAT_004dfdd0 + iVar55 * 8);
        uRam004ccaf4 = *(undefined4 *)(&DAT_004dfdd4 + iVar55 * 8);
        uVar53 = (uint3)((uint)*(undefined4 *)
                                (&DAT_004cb230 + (uint)(byte)(&DAT_004cb370)[DAT_004c9726] * 4) >> 8
                        );
        uRam004ccaf8 = (uint)uVar53 | CONCAT31(uVar53,uRam004ccaf8._3_1_) << 0x18;
        iVar55 = (DAT_004c972a << ((&DAT_004cb370)[DAT_004c972a] & 0x1f)) >> 3;
        uRam004ccafd = *(undefined4 *)(&DAT_004dfdd0 + iVar55 * 8);
        uRam004ccb01 = *(undefined4 *)(&DAT_004dfdd4 + iVar55 * 8);
        uVar53 = (uint3)((uint)*(undefined4 *)
                                (&DAT_004cb230 + (uint)(byte)(&DAT_004cb370)[DAT_004c972a] * 4) >> 8
                        );
        uRam004ccb05 = (uint)uVar53 | CONCAT31(uVar53,uRam004ccb05._3_1_) << 0x18;
        uVar3 = DAT_004c970e;
      }
      pcVar29 = (char *)((int)uVar3 >> 10);
      cVar2 = (char)pcVar29;
      DAT_004c970e = uVar3;
      *pcVar29 = *pcVar29 + cVar2;
      *pcVar29 = *pcVar29 + cVar2;
      *pcVar29 = *pcVar29 + cVar2;
      *pcVar29 = *pcVar29 + cVar2;
      pcVar30 = (char *)((int)pcVar29 * 4);
      cVar2 = (char)pcVar30;
      *pcVar30 = *pcVar30 + cVar2;
      *pcVar30 = *pcVar30 + cVar2;
      *pcVar30 = *pcVar30 + cVar2;
      *pcVar30 = *pcVar30 + cVar2;
      uVar3 = DAT_004c974e + 0x12345678;
      if (0xedcba987 < DAT_004c974e) {
        if (DAT_004c976e != 0) {
          (*(code *)PTR_FUN_004cb47c)();
        }
        iVar55 = 0xe;
        do {
          (&DAT_004c9742)[iVar55] = *(undefined4 *)(&DAT_004ca30e + iVar55 * 4);
          bVar1 = 0 < iVar55;
          iVar55 = iVar55 + -1;
        } while (bVar1);
        DAT_004c977e = 0;
        DAT_004ca33e = 0;
        if (DAT_004c9772 != '\0') {
          DAT_004cb478 = (DAT_004cb478 << 0xb | DAT_004cb478 >> 0x15) + DAT_004cb478 + 1;
          DAT_004c974e = DAT_004c974e + (DAT_004cb478 & 0x3fc00);
        }
        iRam004ccb10 = DAT_004c974a;
        uRam004ccb26 = DAT_004c9742;
        iVar55 = (DAT_004c9766 << ((&DAT_004cb370)[DAT_004c9766] & 0x1f)) >> 3;
        uRam004ccb30 = *(undefined4 *)(&DAT_004dfdd0 + iVar55 * 8);
        uRam004ccb34 = *(undefined4 *)(&DAT_004dfdd4 + iVar55 * 8);
        uVar53 = (uint3)((uint)*(undefined4 *)
                                (&DAT_004cb230 + (uint)(byte)(&DAT_004cb370)[DAT_004c9766] * 4) >> 8
                        );
        uRam004ccb38 = (uint)uVar53 | CONCAT31(uVar53,uRam004ccb38._3_1_) << 0x18;
        iVar55 = (DAT_004c976a << ((&DAT_004cb370)[DAT_004c976a] & 0x1f)) >> 3;
        uRam004ccb3d = *(undefined4 *)(&DAT_004dfdd0 + iVar55 * 8);
        uRam004ccb41 = *(undefined4 *)(&DAT_004dfdd4 + iVar55 * 8);
        uVar53 = (uint3)((uint)*(undefined4 *)
                                (&DAT_004cb230 + (uint)(byte)(&DAT_004cb370)[DAT_004c976a] * 4) >> 8
                        );
        uRam004ccb45 = (uint)uVar53 | CONCAT31(uVar53,uRam004ccb45._3_1_) << 0x18;
        uVar3 = DAT_004c974e;
      }
      pcVar31 = (char *)((int)uVar3 >> 10);
      cVar2 = (char)pcVar31;
      DAT_004c974e = uVar3;
      *pcVar31 = *pcVar31 + cVar2;
      *pcVar31 = *pcVar31 + cVar2;
      *pcVar31 = *pcVar31 + cVar2;
      *pcVar31 = *pcVar31 + cVar2;
      pcVar32 = (char *)((int)pcVar31 * 4);
      cVar2 = (char)pcVar32;
      *pcVar32 = *pcVar32 + cVar2;
      *pcVar32 = *pcVar32 + cVar2;
      *pcVar32 = *pcVar32 + cVar2;
      *pcVar32 = *pcVar32 + cVar2;
      uVar3 = DAT_004c978e + 0x12345678;
      if (0xedcba987 < DAT_004c978e) {
        if (DAT_004c97ae != 0) {
          (*(code *)PTR_FUN_004cb47c)();
        }
        iVar55 = 0xe;
        do {
          (&DAT_004c9782)[iVar55] = *(undefined4 *)(&DAT_004ca34a + iVar55 * 4);
          bVar1 = 0 < iVar55;
          iVar55 = iVar55 + -1;
        } while (bVar1);
        DAT_004c97be = 0;
        DAT_004ca37a = 0;
        if (DAT_004c97b2 != '\0') {
          DAT_004cb478 = (DAT_004cb478 << 0xb | DAT_004cb478 >> 0x15) + DAT_004cb478 + 1;
          DAT_004c978e = DAT_004c978e + (DAT_004cb478 & 0x3fc00);
        }
        iRam004ccb50 = DAT_004c978a;
        uRam004ccb66 = DAT_004c9782;
        iVar55 = (DAT_004c97a6 << ((&DAT_004cb370)[DAT_004c97a6] & 0x1f)) >> 3;
        uRam004ccb70 = *(undefined4 *)(&DAT_004dfdd0 + iVar55 * 8);
        uRam004ccb74 = *(undefined4 *)(&DAT_004dfdd4 + iVar55 * 8);
        uVar53 = (uint3)((uint)*(undefined4 *)
                                (&DAT_004cb230 + (uint)(byte)(&DAT_004cb370)[DAT_004c97a6] * 4) >> 8
                        );
        uRam004ccb78 = (uint)uVar53 | CONCAT31(uVar53,uRam004ccb78._3_1_) << 0x18;
        iVar55 = (DAT_004c97aa << ((&DAT_004cb370)[DAT_004c97aa] & 0x1f)) >> 3;
        uRam004ccb7d = *(undefined4 *)(&DAT_004dfdd0 + iVar55 * 8);
        uRam004ccb81 = *(undefined4 *)(&DAT_004dfdd4 + iVar55 * 8);
        uVar53 = (uint3)((uint)*(undefined4 *)
                                (&DAT_004cb230 + (uint)(byte)(&DAT_004cb370)[DAT_004c97aa] * 4) >> 8
                        );
        uRam004ccb85 = (uint)uVar53 | CONCAT31(uVar53,uRam004ccb85._3_1_) << 0x18;
        uVar3 = DAT_004c978e;
      }
      pcVar33 = (char *)((int)uVar3 >> 10);
      cVar2 = (char)pcVar33;
      DAT_004c978e = uVar3;
      *pcVar33 = *pcVar33 + cVar2;
      *pcVar33 = *pcVar33 + cVar2;
      *pcVar33 = *pcVar33 + cVar2;
      *pcVar33 = *pcVar33 + cVar2;
      pcVar34 = (char *)((int)pcVar33 * 4);
      cVar2 = (char)pcVar34;
      *pcVar34 = *pcVar34 + cVar2;
      *pcVar34 = *pcVar34 + cVar2;
      *pcVar34 = *pcVar34 + cVar2;
      *pcVar34 = *pcVar34 + cVar2;
      uVar3 = DAT_004c97ce + 0x12345678;
      if (0xedcba987 < DAT_004c97ce) {
        if (DAT_004c97ee != 0) {
          (*(code *)PTR_FUN_004cb47c)();
        }
        iVar55 = 0xe;
        do {
          (&DAT_004c97c2)[iVar55] = *(undefined4 *)(&DAT_004ca386 + iVar55 * 4);
          bVar1 = 0 < iVar55;
          iVar55 = iVar55 + -1;
        } while (bVar1);
        DAT_004c97fe = 0;
        DAT_004ca3b6 = 0;
        if (DAT_004c97f2 != '\0') {
          DAT_004cb478 = (DAT_004cb478 << 0xb | DAT_004cb478 >> 0x15) + DAT_004cb478 + 1;
          DAT_004c97ce = DAT_004c97ce + (DAT_004cb478 & 0x3fc00);
        }
        iRam004ccb90 = DAT_004c97ca;
        uRam004ccba6 = DAT_004c97c2;
        iVar55 = (DAT_004c97e6 << ((&DAT_004cb370)[DAT_004c97e6] & 0x1f)) >> 3;
        uRam004ccbb0 = *(undefined4 *)(&DAT_004dfdd0 + iVar55 * 8);
        uRam004ccbb4 = *(undefined4 *)(&DAT_004dfdd4 + iVar55 * 8);
        uVar53 = (uint3)((uint)*(undefined4 *)
                                (&DAT_004cb230 + (uint)(byte)(&DAT_004cb370)[DAT_004c97e6] * 4) >> 8
                        );
        uRam004ccbb8 = (uint)uVar53 | CONCAT31(uVar53,uRam004ccbb8._3_1_) << 0x18;
        iVar55 = (DAT_004c97ea << ((&DAT_004cb370)[DAT_004c97ea] & 0x1f)) >> 3;
        uRam004ccbbd = *(undefined4 *)(&DAT_004dfdd0 + iVar55 * 8);
        uRam004ccbc1 = *(undefined4 *)(&DAT_004dfdd4 + iVar55 * 8);
        uVar53 = (uint3)((uint)*(undefined4 *)
                                (&DAT_004cb230 + (uint)(byte)(&DAT_004cb370)[DAT_004c97ea] * 4) >> 8
                        );
        uRam004ccbc5 = (uint)uVar53 | CONCAT31(uVar53,uRam004ccbc5._3_1_) << 0x18;
        uVar3 = DAT_004c97ce;
      }
      pcVar35 = (char *)((int)uVar3 >> 10);
      cVar2 = (char)pcVar35;
      DAT_004c97ce = uVar3;
      *pcVar35 = *pcVar35 + cVar2;
      *pcVar35 = *pcVar35 + cVar2;
      *pcVar35 = *pcVar35 + cVar2;
      *pcVar35 = *pcVar35 + cVar2;
      pcVar36 = (char *)((int)pcVar35 * 4);
      cVar2 = (char)pcVar36;
      *pcVar36 = *pcVar36 + cVar2;
      *pcVar36 = *pcVar36 + cVar2;
      *pcVar36 = *pcVar36 + cVar2;
      *pcVar36 = *pcVar36 + cVar2;
      uVar3 = DAT_004c980e + 0x12345678;
      if (0xedcba987 < DAT_004c980e) {
        if (DAT_004c982e != 0) {
          (*(code *)PTR_FUN_004cb47c)();
        }
        iVar55 = 0xe;
        do {
          (&DAT_004c9802)[iVar55] = *(undefined4 *)(&DAT_004ca3c2 + iVar55 * 4);
          bVar1 = 0 < iVar55;
          iVar55 = iVar55 + -1;
        } while (bVar1);
        DAT_004c983e = 0;
        DAT_004ca3f2 = 0;
        if (DAT_004c9832 != '\0') {
          DAT_004cb478 = (DAT_004cb478 << 0xb | DAT_004cb478 >> 0x15) + DAT_004cb478 + 1;
          DAT_004c980e = DAT_004c980e + (DAT_004cb478 & 0x3fc00);
        }
        iRam004ccbd0 = DAT_004c980a;
        uRam004ccbe6 = DAT_004c9802;
        iVar55 = (DAT_004c9826 << ((&DAT_004cb370)[DAT_004c9826] & 0x1f)) >> 3;
        uRam004ccbf0 = *(undefined4 *)(&DAT_004dfdd0 + iVar55 * 8);
        uRam004ccbf4 = *(undefined4 *)(&DAT_004dfdd4 + iVar55 * 8);
        uVar53 = (uint3)((uint)*(undefined4 *)
                                (&DAT_004cb230 + (uint)(byte)(&DAT_004cb370)[DAT_004c9826] * 4) >> 8
                        );
        uRam004ccbf8 = (uint)uVar53 | CONCAT31(uVar53,uRam004ccbf8._3_1_) << 0x18;
        iVar55 = (DAT_004c982a << ((&DAT_004cb370)[DAT_004c982a] & 0x1f)) >> 3;
        uRam004ccbfd = *(undefined4 *)(&DAT_004dfdd0 + iVar55 * 8);
        uRam004ccc01 = *(undefined4 *)(&DAT_004dfdd4 + iVar55 * 8);
        uVar53 = (uint3)((uint)*(undefined4 *)
                                (&DAT_004cb230 + (uint)(byte)(&DAT_004cb370)[DAT_004c982a] * 4) >> 8
                        );
        uRam004ccc05 = (uint)uVar53 | CONCAT31(uVar53,uRam004ccc05._3_1_) << 0x18;
        uVar3 = DAT_004c980e;
      }
      pcVar37 = (char *)((int)uVar3 >> 10);
      cVar2 = (char)pcVar37;
      DAT_004c980e = uVar3;
      *pcVar37 = *pcVar37 + cVar2;
      *pcVar37 = *pcVar37 + cVar2;
      *pcVar37 = *pcVar37 + cVar2;
      *pcVar37 = *pcVar37 + cVar2;
      pcVar38 = (char *)((int)pcVar37 * 4);
      cVar2 = (char)pcVar38;
      *pcVar38 = *pcVar38 + cVar2;
      *pcVar38 = *pcVar38 + cVar2;
      *pcVar38 = *pcVar38 + cVar2;
      *pcVar38 = *pcVar38 + cVar2;
      uVar3 = DAT_004c984e + 0x12345678;
      if (0xedcba987 < DAT_004c984e) {
        if (DAT_004c986e != 0) {
          (*(code *)PTR_FUN_004cb47c)();
        }
        iVar55 = 0xe;
        do {
          (&DAT_004c9842)[iVar55] = *(undefined4 *)(&DAT_004ca3fe + iVar55 * 4);
          bVar1 = 0 < iVar55;
          iVar55 = iVar55 + -1;
        } while (bVar1);
        DAT_004c987e = 0;
        DAT_004ca42e = 0;
        if (DAT_004c9872 != '\0') {
          DAT_004cb478 = (DAT_004cb478 << 0xb | DAT_004cb478 >> 0x15) + DAT_004cb478 + 1;
          DAT_004c984e = DAT_004c984e + (DAT_004cb478 & 0x3fc00);
        }
        iRam004ccc10 = DAT_004c984a;
        uRam004ccc26 = DAT_004c9842;
        iVar55 = (DAT_004c9866 << ((&DAT_004cb370)[DAT_004c9866] & 0x1f)) >> 3;
        uRam004ccc30 = *(undefined4 *)(&DAT_004dfdd0 + iVar55 * 8);
        uRam004ccc34 = *(undefined4 *)(&DAT_004dfdd4 + iVar55 * 8);
        uVar53 = (uint3)((uint)*(undefined4 *)
                                (&DAT_004cb230 + (uint)(byte)(&DAT_004cb370)[DAT_004c9866] * 4) >> 8
                        );
        uRam004ccc38 = (uint)uVar53 | CONCAT31(uVar53,uRam004ccc38._3_1_) << 0x18;
        iVar55 = (DAT_004c986a << ((&DAT_004cb370)[DAT_004c986a] & 0x1f)) >> 3;
        uRam004ccc3d = *(undefined4 *)(&DAT_004dfdd0 + iVar55 * 8);
        uRam004ccc41 = *(undefined4 *)(&DAT_004dfdd4 + iVar55 * 8);
        uVar53 = (uint3)((uint)*(undefined4 *)
                                (&DAT_004cb230 + (uint)(byte)(&DAT_004cb370)[DAT_004c986a] * 4) >> 8
                        );
        uRam004ccc45 = (uint)uVar53 | CONCAT31(uVar53,uRam004ccc45._3_1_) << 0x18;
        uVar3 = DAT_004c984e;
      }
      pcVar39 = (char *)((int)uVar3 >> 10);
      cVar2 = (char)pcVar39;
      DAT_004c984e = uVar3;
      *pcVar39 = *pcVar39 + cVar2;
      *pcVar39 = *pcVar39 + cVar2;
      *pcVar39 = *pcVar39 + cVar2;
      *pcVar39 = *pcVar39 + cVar2;
      pcVar40 = (char *)((int)pcVar39 * 4);
      cVar2 = (char)pcVar40;
      *pcVar40 = *pcVar40 + cVar2;
      *pcVar40 = *pcVar40 + cVar2;
      *pcVar40 = *pcVar40 + cVar2;
      *pcVar40 = *pcVar40 + cVar2;
      uVar3 = DAT_004c988e + 0x12345678;
      if (0xedcba987 < DAT_004c988e) {
        if (DAT_004c98ae != 0) {
          (*(code *)PTR_FUN_004cb47c)();
        }
        iVar55 = 0xe;
        do {
          (&DAT_004c9882)[iVar55] = *(undefined4 *)(&DAT_004ca43a + iVar55 * 4);
          bVar1 = 0 < iVar55;
          iVar55 = iVar55 + -1;
        } while (bVar1);
        DAT_004c98be = 0;
        DAT_004ca46a = 0;
        if (DAT_004c98b2 != '\0') {
          DAT_004cb478 = (DAT_004cb478 << 0xb | DAT_004cb478 >> 0x15) + DAT_004cb478 + 1;
          DAT_004c988e = DAT_004c988e + (DAT_004cb478 & 0x3fc00);
        }
        iRam004ccc50 = DAT_004c988a;
        uRam004ccc66 = DAT_004c9882;
        iVar55 = (DAT_004c98a6 << ((&DAT_004cb370)[DAT_004c98a6] & 0x1f)) >> 3;
        uRam004ccc70 = *(undefined4 *)(&DAT_004dfdd0 + iVar55 * 8);
        uRam004ccc74 = *(undefined4 *)(&DAT_004dfdd4 + iVar55 * 8);
        uVar53 = (uint3)((uint)*(undefined4 *)
                                (&DAT_004cb230 + (uint)(byte)(&DAT_004cb370)[DAT_004c98a6] * 4) >> 8
                        );
        uRam004ccc78 = (uint)uVar53 | CONCAT31(uVar53,uRam004ccc78._3_1_) << 0x18;
        iVar55 = (DAT_004c98aa << ((&DAT_004cb370)[DAT_004c98aa] & 0x1f)) >> 3;
        uRam004ccc7d = *(undefined4 *)(&DAT_004dfdd0 + iVar55 * 8);
        uRam004ccc81 = *(undefined4 *)(&DAT_004dfdd4 + iVar55 * 8);
        uVar53 = (uint3)((uint)*(undefined4 *)
                                (&DAT_004cb230 + (uint)(byte)(&DAT_004cb370)[DAT_004c98aa] * 4) >> 8
                        );
        uRam004ccc85 = (uint)uVar53 | CONCAT31(uVar53,uRam004ccc85._3_1_) << 0x18;
        uVar3 = DAT_004c988e;
      }
      pcVar41 = (char *)((int)uVar3 >> 10);
      cVar2 = (char)pcVar41;
      DAT_004c988e = uVar3;
      *pcVar41 = *pcVar41 + cVar2;
      *pcVar41 = *pcVar41 + cVar2;
      *pcVar41 = *pcVar41 + cVar2;
      *pcVar41 = *pcVar41 + cVar2;
      pcVar42 = (char *)((int)pcVar41 * 4);
      cVar2 = (char)pcVar42;
      *pcVar42 = *pcVar42 + cVar2;
      *pcVar42 = *pcVar42 + cVar2;
      *pcVar42 = *pcVar42 + cVar2;
      *pcVar42 = *pcVar42 + cVar2;
      uVar3 = DAT_004c98ce + 0x12345678;
      if (0xedcba987 < DAT_004c98ce) {
        if (DAT_004c98ee != 0) {
          (*(code *)PTR_FUN_004cb47c)();
        }
        iVar55 = 0xe;
        do {
          (&DAT_004c98c2)[iVar55] = *(undefined4 *)(&DAT_004ca476 + iVar55 * 4);
          bVar1 = 0 < iVar55;
          iVar55 = iVar55 + -1;
        } while (bVar1);
        DAT_004c98fe = 0;
        DAT_004ca4a6 = 0;
        if (DAT_004c98f2 != '\0') {
          DAT_004cb478 = (DAT_004cb478 << 0xb | DAT_004cb478 >> 0x15) + DAT_004cb478 + 1;
          DAT_004c98ce = DAT_004c98ce + (DAT_004cb478 & 0x3fc00);
        }
        iRam004ccc90 = DAT_004c98ca;
        uRam004ccca6 = DAT_004c98c2;
        iVar55 = (DAT_004c98e6 << ((&DAT_004cb370)[DAT_004c98e6] & 0x1f)) >> 3;
        uRam004cccb0 = *(undefined4 *)(&DAT_004dfdd0 + iVar55 * 8);
        uRam004cccb4 = *(undefined4 *)(&DAT_004dfdd4 + iVar55 * 8);
        uVar53 = (uint3)((uint)*(undefined4 *)
                                (&DAT_004cb230 + (uint)(byte)(&DAT_004cb370)[DAT_004c98e6] * 4) >> 8
                        );
        uRam004cccb8 = (uint)uVar53 | CONCAT31(uVar53,uRam004cccb8._3_1_) << 0x18;
        iVar55 = (DAT_004c98ea << ((&DAT_004cb370)[DAT_004c98ea] & 0x1f)) >> 3;
        uRam004cccbd = *(undefined4 *)(&DAT_004dfdd0 + iVar55 * 8);
        uRam004cccc1 = *(undefined4 *)(&DAT_004dfdd4 + iVar55 * 8);
        uVar53 = (uint3)((uint)*(undefined4 *)
                                (&DAT_004cb230 + (uint)(byte)(&DAT_004cb370)[DAT_004c98ea] * 4) >> 8
                        );
        uRam004cccc5 = (uint)uVar53 | CONCAT31(uVar53,uRam004cccc5._3_1_) << 0x18;
        uVar3 = DAT_004c98ce;
      }
      pcVar43 = (char *)((int)uVar3 >> 10);
      cVar2 = (char)pcVar43;
      DAT_004c98ce = uVar3;
      *pcVar43 = *pcVar43 + cVar2;
      *pcVar43 = *pcVar43 + cVar2;
      *pcVar43 = *pcVar43 + cVar2;
      *pcVar43 = *pcVar43 + cVar2;
      pcVar44 = (char *)((int)pcVar43 * 4);
      cVar2 = (char)pcVar44;
      *pcVar44 = *pcVar44 + cVar2;
      *pcVar44 = *pcVar44 + cVar2;
      *pcVar44 = *pcVar44 + cVar2;
      *pcVar44 = *pcVar44 + cVar2;
      uVar3 = DAT_004c990e + 0x12345678;
      if (0xedcba987 < DAT_004c990e) {
        if (DAT_004c992e != 0) {
          (*(code *)PTR_FUN_004cb47c)();
        }
        iVar55 = 0xe;
        do {
          (&DAT_004c9902)[iVar55] = *(undefined4 *)(&DAT_004ca4b2 + iVar55 * 4);
          bVar1 = 0 < iVar55;
          iVar55 = iVar55 + -1;
        } while (bVar1);
        DAT_004c993e = 0;
        DAT_004ca4e2 = 0;
        if (DAT_004c9932 != '\0') {
          DAT_004cb478 = (DAT_004cb478 << 0xb | DAT_004cb478 >> 0x15) + DAT_004cb478 + 1;
          DAT_004c990e = DAT_004c990e + (DAT_004cb478 & 0x3fc00);
        }
        iRam004cccd0 = DAT_004c990a;
        uRam004ccce6 = DAT_004c9902;
        iVar55 = (DAT_004c9926 << ((&DAT_004cb370)[DAT_004c9926] & 0x1f)) >> 3;
        uRam004cccf0 = *(undefined4 *)(&DAT_004dfdd0 + iVar55 * 8);
        uRam004cccf4 = *(undefined4 *)(&DAT_004dfdd4 + iVar55 * 8);
        uVar53 = (uint3)((uint)*(undefined4 *)
                                (&DAT_004cb230 + (uint)(byte)(&DAT_004cb370)[DAT_004c9926] * 4) >> 8
                        );
        uRam004cccf8 = (uint)uVar53 | CONCAT31(uVar53,uRam004cccf8._3_1_) << 0x18;
        iVar55 = (DAT_004c992a << ((&DAT_004cb370)[DAT_004c992a] & 0x1f)) >> 3;
        uRam004cccfd = *(undefined4 *)(&DAT_004dfdd0 + iVar55 * 8);
        uRam004ccd01 = *(undefined4 *)(&DAT_004dfdd4 + iVar55 * 8);
        uVar53 = (uint3)((uint)*(undefined4 *)
                                (&DAT_004cb230 + (uint)(byte)(&DAT_004cb370)[DAT_004c992a] * 4) >> 8
                        );
        uRam004ccd05 = (uint)uVar53 | CONCAT31(uVar53,uRam004ccd05._3_1_) << 0x18;
        uVar3 = DAT_004c990e;
      }
      pcVar45 = (char *)((int)uVar3 >> 10);
      cVar2 = (char)pcVar45;
      DAT_004c990e = uVar3;
      *pcVar45 = *pcVar45 + cVar2;
      *pcVar45 = *pcVar45 + cVar2;
      *pcVar45 = *pcVar45 + cVar2;
      *pcVar45 = *pcVar45 + cVar2;
      pcVar46 = (char *)((int)pcVar45 * 4);
      cVar2 = (char)pcVar46;
      *pcVar46 = *pcVar46 + cVar2;
      *pcVar46 = *pcVar46 + cVar2;
      *pcVar46 = *pcVar46 + cVar2;
      *pcVar46 = *pcVar46 + cVar2;
      uVar3 = DAT_004c994e + 0x12345678;
      if (0xedcba987 < DAT_004c994e) {
        if (DAT_004c996e != 0) {
          (*(code *)PTR_FUN_004cb47c)();
        }
        iVar55 = 0xe;
        do {
          (&DAT_004c9942)[iVar55] = *(undefined4 *)(&DAT_004ca4ee + iVar55 * 4);
          bVar1 = 0 < iVar55;
          iVar55 = iVar55 + -1;
        } while (bVar1);
        DAT_004c997e = 0;
        DAT_004ca51e = 0;
        if (DAT_004c9972 != '\0') {
          DAT_004cb478 = (DAT_004cb478 << 0xb | DAT_004cb478 >> 0x15) + DAT_004cb478 + 1;
          DAT_004c994e = DAT_004c994e + (DAT_004cb478 & 0x3fc00);
        }
        iRam004ccd10 = DAT_004c994a;
        uRam004ccd26 = DAT_004c9942;
        iVar55 = (DAT_004c9966 << ((&DAT_004cb370)[DAT_004c9966] & 0x1f)) >> 3;
        uRam004ccd30 = *(undefined4 *)(&DAT_004dfdd0 + iVar55 * 8);
        uRam004ccd34 = *(undefined4 *)(&DAT_004dfdd4 + iVar55 * 8);
        uVar53 = (uint3)((uint)*(undefined4 *)
                                (&DAT_004cb230 + (uint)(byte)(&DAT_004cb370)[DAT_004c9966] * 4) >> 8
                        );
        uRam004ccd38 = (uint)uVar53 | CONCAT31(uVar53,uRam004ccd38._3_1_) << 0x18;
        iVar55 = (DAT_004c996a << ((&DAT_004cb370)[DAT_004c996a] & 0x1f)) >> 3;
        uRam004ccd3d = *(undefined4 *)(&DAT_004dfdd0 + iVar55 * 8);
        uRam004ccd41 = *(undefined4 *)(&DAT_004dfdd4 + iVar55 * 8);
        uVar53 = (uint3)((uint)*(undefined4 *)
                                (&DAT_004cb230 + (uint)(byte)(&DAT_004cb370)[DAT_004c996a] * 4) >> 8
                        );
        uRam004ccd45 = (uint)uVar53 | CONCAT31(uVar53,uRam004ccd45._3_1_) << 0x18;
        uVar3 = DAT_004c994e;
      }
      pcVar47 = (char *)((int)uVar3 >> 10);
      cVar2 = (char)pcVar47;
      DAT_004c994e = uVar3;
      *pcVar47 = *pcVar47 + cVar2;
      *pcVar47 = *pcVar47 + cVar2;
      *pcVar47 = *pcVar47 + cVar2;
      *pcVar47 = *pcVar47 + cVar2;
      pcVar48 = (char *)((int)pcVar47 * 4);
      cVar2 = (char)pcVar48;
      *pcVar48 = *pcVar48 + cVar2;
      *pcVar48 = *pcVar48 + cVar2;
      *pcVar48 = *pcVar48 + cVar2;
      *pcVar48 = *pcVar48 + cVar2;
      uVar3 = DAT_004c998e + 0x12345678;
      if (0xedcba987 < DAT_004c998e) {
        if (DAT_004c99ae != 0) {
          (*(code *)PTR_FUN_004cb47c)();
        }
        iVar55 = 0xe;
        do {
          (&DAT_004c9982)[iVar55] = *(undefined4 *)(&DAT_004ca52a + iVar55 * 4);
          bVar1 = 0 < iVar55;
          iVar55 = iVar55 + -1;
        } while (bVar1);
        DAT_004c99be = 0;
        DAT_004ca55a = 0;
        if (DAT_004c99b2 != '\0') {
          DAT_004cb478 = (DAT_004cb478 << 0xb | DAT_004cb478 >> 0x15) + DAT_004cb478 + 1;
          DAT_004c998e = DAT_004c998e + (DAT_004cb478 & 0x3fc00);
        }
        iRam004ccd50 = DAT_004c998a;
        uRam004ccd66 = DAT_004c9982;
        iVar55 = (DAT_004c99a6 << ((&DAT_004cb370)[DAT_004c99a6] & 0x1f)) >> 3;
        uRam004ccd70 = *(undefined4 *)(&DAT_004dfdd0 + iVar55 * 8);
        uRam004ccd74 = *(undefined4 *)(&DAT_004dfdd4 + iVar55 * 8);
        uVar53 = (uint3)((uint)*(undefined4 *)
                                (&DAT_004cb230 + (uint)(byte)(&DAT_004cb370)[DAT_004c99a6] * 4) >> 8
                        );
        uRam004ccd78 = (uint)uVar53 | CONCAT31(uVar53,uRam004ccd78._3_1_) << 0x18;
        iVar55 = (DAT_004c99aa << ((&DAT_004cb370)[DAT_004c99aa] & 0x1f)) >> 3;
        uRam004ccd7d = *(undefined4 *)(&DAT_004dfdd0 + iVar55 * 8);
        uRam004ccd81 = *(undefined4 *)(&DAT_004dfdd4 + iVar55 * 8);
        uVar53 = (uint3)((uint)*(undefined4 *)
                                (&DAT_004cb230 + (uint)(byte)(&DAT_004cb370)[DAT_004c99aa] * 4) >> 8
                        );
        uRam004ccd85 = (uint)uVar53 | CONCAT31(uVar53,uRam004ccd85._3_1_) << 0x18;
        uVar3 = DAT_004c998e;
      }
      pcVar49 = (char *)((int)uVar3 >> 10);
      cVar2 = (char)pcVar49;
      DAT_004c998e = uVar3;
      *pcVar49 = *pcVar49 + cVar2;
      *pcVar49 = *pcVar49 + cVar2;
      *pcVar49 = *pcVar49 + cVar2;
      *pcVar49 = *pcVar49 + cVar2;
      pcVar50 = (char *)((int)pcVar49 * 4);
      cVar2 = (char)pcVar50;
      *pcVar50 = *pcVar50 + cVar2;
      *pcVar50 = *pcVar50 + cVar2;
      *pcVar50 = *pcVar50 + cVar2;
      *pcVar50 = *pcVar50 + cVar2;
      uVar3 = DAT_004c99ce + 0x12345678;
      if (0xedcba987 < DAT_004c99ce) {
        if (DAT_004c99ee != 0) {
          (*(code *)PTR_FUN_004cb47c)();
        }
        iVar55 = 0xe;
        do {
          (&DAT_004c99c2)[iVar55] = *(undefined4 *)(&DAT_004ca566 + iVar55 * 4);
          bVar1 = 0 < iVar55;
          iVar55 = iVar55 + -1;
        } while (bVar1);
        DAT_004c99fe = 0;
        DAT_004ca596 = 0;
        if (DAT_004c99f2 != '\0') {
          DAT_004cb478 = (DAT_004cb478 << 0xb | DAT_004cb478 >> 0x15) + DAT_004cb478 + 1;
          DAT_004c99ce = DAT_004c99ce + (DAT_004cb478 & 0x3fc00);
        }
        iRam004ccd90 = DAT_004c99ca;
        uRam004ccda6 = DAT_004c99c2;
        iVar55 = (DAT_004c99e6 << ((&DAT_004cb370)[DAT_004c99e6] & 0x1f)) >> 3;
        uRam004ccdb0 = *(undefined4 *)(&DAT_004dfdd0 + iVar55 * 8);
        uRam004ccdb4 = *(undefined4 *)(&DAT_004dfdd4 + iVar55 * 8);
        uVar53 = (uint3)((uint)*(undefined4 *)
                                (&DAT_004cb230 + (uint)(byte)(&DAT_004cb370)[DAT_004c99e6] * 4) >> 8
                        );
        uRam004ccdb8 = (uint)uVar53 | CONCAT31(uVar53,uRam004ccdb8._3_1_) << 0x18;
        iVar55 = (DAT_004c99ea << ((&DAT_004cb370)[DAT_004c99ea] & 0x1f)) >> 3;
        uRam004ccdbd = *(undefined4 *)(&DAT_004dfdd0 + iVar55 * 8);
        uRam004ccdc1 = *(undefined4 *)(&DAT_004dfdd4 + iVar55 * 8);
        uVar53 = (uint3)((uint)*(undefined4 *)
                                (&DAT_004cb230 + (uint)(byte)(&DAT_004cb370)[DAT_004c99ea] * 4) >> 8
                        );
        uRam004ccdc5 = (uint)uVar53 | CONCAT31(uVar53,uRam004ccdc5._3_1_) << 0x18;
        uVar3 = DAT_004c99ce;
      }
      pcVar51 = (char *)((int)uVar3 >> 10);
      cVar2 = (char)pcVar51;
      DAT_004c99ce = uVar3;
      *pcVar51 = *pcVar51 + cVar2;
      *pcVar51 = *pcVar51 + cVar2;
      *pcVar51 = *pcVar51 + cVar2;
      *pcVar51 = *pcVar51 + cVar2;
      pcVar52 = (char *)((int)pcVar51 * 4);
      pcVar58 = pcVar6 + ((int)pcVar58 >> 2) + iVar56 + (int)pcVar8 + (int)pcVar10 + (int)pcVar12 +
                (int)pcVar14 + (int)pcVar16 + (int)pcVar18 + (int)pcVar20 + (int)pcVar22 +
                (int)pcVar24 + (int)pcVar26 + (int)pcVar28 + (int)pcVar30 + (int)pcVar32 +
                (int)pcVar34 + (int)pcVar36 + (int)pcVar38 + (int)pcVar40 + (int)pcVar42 +
                (int)pcVar44 + (int)pcVar46 + (int)pcVar48 + (int)pcVar50 + (int)pcVar52;
      cVar2 = (char)pcVar52;
      *pcVar52 = *pcVar52 + cVar2;
      *pcVar52 = *pcVar52 + cVar2;
      *pcVar52 = *pcVar52 + cVar2;
      *pcVar52 = *pcVar52 + cVar2;
      pcVar57 = (char *)(((int)pcVar57 >> 2) + iVar54 + (int)pcVar5 * 0x10 + (int)pcVar7 * 0x10 +
                         (int)pcVar9 * 0x10 + (int)pcVar11 * 0x10 + (int)pcVar13 * 0x10 +
                         (int)pcVar15 * 0x10 + (int)pcVar17 * 0x10 + (int)pcVar19 * 0x10 +
                         (int)pcVar21 * 0x10 + (int)pcVar23 * 0x10 + (int)pcVar25 * 0x10 +
                         (int)pcVar27 * 0x10 + (int)pcVar29 * 0x10 + (int)pcVar31 * 0x10 +
                         (int)pcVar33 * 0x10 + (int)pcVar35 * 0x10 + (int)pcVar37 * 0x10 +
                         (int)pcVar39 * 0x10 + (int)pcVar41 * 0x10 + (int)pcVar43 * 0x10 +
                         (int)pcVar45 * 0x10 + (int)pcVar47 * 0x10 + (int)pcVar49 * 0x10 +
                        (int)pcVar51 * 0x10);
      (*(code *)PTR_FUN_004cecc4)();
      if (0x7fff < (int)pcVar58) {
        pcVar58 = (char *)0x7fff;
      }
      if (0x7fff < (int)pcVar57) {
        pcVar57 = (char *)0x7fff;
      }
      if ((int)pcVar58 < -0x7fff) {
        pcVar58 = (char *)0xffff8001;
      }
      if ((int)pcVar57 < -0x7fff) {
        pcVar57 = (char *)0xffff8001;
      }
      *(short *)puVar59 = (short)pcVar58;
      *(short *)((int)puVar59 + 2) = (short)pcVar57;
      iVar54 = _DAT_004cc6f8;
      uVar4 = _DAT_004cc6f0;
      puVar59 = puVar59 + 1;
      _DAT_004cc6f0 = _DAT_004cc6f0 - 1;
      uVar3 = _DAT_004cc6f0;
    } while (_DAT_004cc6f0 != 0 && 0 < (int)uVar4);
    DAT_004c940a = DAT_004c940a + DAT_004c943a;
    DAT_004c944a = DAT_004c944a + DAT_004c947a;
    DAT_004c948a = DAT_004c948a + DAT_004c94ba;
    DAT_004c94ca = DAT_004c94ca + DAT_004c94fa;
    DAT_004c950a = DAT_004c950a + DAT_004c953a;
    DAT_004c954a = DAT_004c954a + DAT_004c957a;
    DAT_004c958a = DAT_004c958a + DAT_004c95ba;
    DAT_004c95ca = DAT_004c95ca + DAT_004c95fa;
    DAT_004c960a = DAT_004c960a + DAT_004c963a;
    DAT_004c964a = DAT_004c964a + DAT_004c967a;
    DAT_004c968a = DAT_004c968a + DAT_004c96ba;
    DAT_004c96ca = DAT_004c96ca + DAT_004c96fa;
    DAT_004c970a = DAT_004c970a + DAT_004c973a;
    DAT_004c974a = DAT_004c974a + DAT_004c977a;
    DAT_004c978a = DAT_004c978a + DAT_004c97ba;
    DAT_004c97ca = DAT_004c97ca + DAT_004c97fa;
    DAT_004c980a = DAT_004c980a + DAT_004c983a;
    DAT_004c984a = DAT_004c984a + DAT_004c987a;
    DAT_004c988a = DAT_004c988a + DAT_004c98ba;
    DAT_004c98ca = DAT_004c98ca + DAT_004c98fa;
    DAT_004c990a = DAT_004c990a + DAT_004c993a;
    DAT_004c994a = DAT_004c994a + DAT_004c997a;
    DAT_004c998a = DAT_004c998a + DAT_004c99ba;
    DAT_004c99ca = DAT_004c99ca + DAT_004c99fa;
    _DAT_004cc6f8 = _DAT_004cc6f8 + -1;
    DAT_004cc700 = pcVar58;
    DAT_004cc704 = pcVar57;
    iRam004cc7d0 = DAT_004c940a;
    iRam004cc810 = DAT_004c944a;
    iRam004cc850 = DAT_004c948a;
    iRam004cc890 = DAT_004c94ca;
    iRam004cc8d0 = DAT_004c950a;
    iRam004cc910 = DAT_004c954a;
    iRam004cc950 = DAT_004c958a;
    iRam004cc990 = DAT_004c95ca;
    iRam004cc9d0 = DAT_004c960a;
    iRam004cca10 = DAT_004c964a;
    iRam004cca50 = DAT_004c968a;
    iRam004cca90 = DAT_004c96ca;
    iRam004ccad0 = DAT_004c970a;
    iRam004ccb10 = DAT_004c974a;
    iRam004ccb50 = DAT_004c978a;
    iRam004ccb90 = DAT_004c97ca;
    iRam004ccbd0 = DAT_004c980a;
    iRam004ccc10 = DAT_004c984a;
    iRam004ccc50 = DAT_004c988a;
    iRam004ccc90 = DAT_004c98ca;
    iRam004cccd0 = DAT_004c990a;
    iRam004ccd10 = DAT_004c994a;
    iRam004ccd50 = DAT_004c998a;
    iRam004ccd90 = DAT_004c99ca;
  } while (_DAT_004cc6f8 != 0 && 0 < iVar54);
  return CONCAT44(param_2,in_EAX);
}

