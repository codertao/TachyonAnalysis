
/* sweep */

void Vid_PresentRect(undefined4 *param_1)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (((DAT_00603968 != 0) && (DAT_00603964 != 0)) && (DAT_00602320 != 0)) {
    if (param_1 == (undefined4 *)0x0) {
      if (DAT_00602328 != (code *)0x0) {
        (*DAT_00602328)(DAT_006022e0,DAT_006022e4);
      }
    }
    else {
      local_20 = DAT_00602308;
      local_18 = DAT_00602310;
      local_1c = DAT_0060230c;
      local_14 = DAT_00602314;
      local_c = DAT_006022fc;
      local_10 = DAT_006022f8;
      local_8 = DAT_00602300;
      DAT_00602308 = *param_1;
      local_4 = DAT_00602304;
      DAT_0060230c = param_1[1];
      DAT_00602310 = param_1[2];
      DAT_00602314 = param_1[3];
      DAT_006022f8 = *param_1;
      DAT_006022fc = param_1[1];
      DAT_00602300 = param_1[2];
      DAT_00602304 = param_1[3];
    }
    (*DAT_006022cc)();
    if (param_1 != (undefined4 *)0x0) {
      DAT_00602308 = local_20;
      DAT_0060230c = local_1c;
      DAT_00602310 = local_18;
      DAT_00602314 = local_14;
      DAT_006022f8 = local_10;
      DAT_006022fc = local_c;
      DAT_00602300 = local_8;
      DAT_00602304 = local_4;
      return;
    }
    if (DAT_00602328 != (code *)0x0) {
      (*DAT_0060232c)(DAT_006022e0,DAT_006022e4);
    }
  }
  return;
}

