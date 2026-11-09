# ttf_music: the in-flight music script, decompiled from TTFMUSIC.BIN by musscr.py.
#
# How the game runs it (decomp/notes/music.md):
#   - When the current segment ends, the game runs the script from where it stopped until
#     it plays a segment (play), waits (wait), or switches state (goto). A goto starts
#     the new state from its top on the next run.
#   - Each run executes at least 32 instructions before it may stop on an empty stack;
#     that doesn't change the logic.
#   - set_volume() sets the music volume (0..255) now; fade_to() sets the volume reached by
#     the end of the next segment.
#   - rand(lo, hi) is inclusive.
#
# Game variables (Music_UpdateFlightVars 0x415060), set every frame in flight:
#   hostiles      number of hostile ships
#   job_status    the current job's status in this region (NOT_ATTEMPTED / FAILED / SUCCESS /
#                 PARTIAL_SUCCESS)
#   shields       OK / LOW / CRITICAL
#   slot4         a context value >> 16 (source not identified)
#   dialog_timer  time left on the dialog line being spoken
#   sector        region * 1000 + sector number   (SECTOR(BORA, 4) = 3004)
#   job           CURRENT_JOB (vars.cfg "jobs")
#   dialog_cue    a job id; set only by dialog lines that carry a music cue
#   story_cue     slot 15, also set by dialog lines: CUE(k, JOB) = k * 10000 + job id, a
#                 numbered story moment within that job
#   game_varN     other slots (dialog lines can set any slot)
# The script's own variables (zero at start; names are mine, from how they're used):
#   theme           which theme is running (state 3 resumes it by number)
#   theme_sector    the sector the theme started in; a sector change resets via state_20
#   stinger_played  a one-off cue has played in this sector
#   bar             position within the theme's segment list
#   peak_hostiles   most hostiles seen during this fight
#   after_combat    which theme to go to once the fight is over
# localN are scratch.

# start state: 0; 57 states; 451 segments named

def state_0():
    theme = 0
    theme_sector = sector
    stinger_played = 0
    bar = 0
    peak_hostiles = 0
    after_combat = 0
    v6 = 0
    set_volume(255)
    goto(state_1)

def state_1():
    set_volume(255)
    while (sector == SECTOR(EARTH, 0)) and (job > 1500):
        wait()  # until the current segment ends
    local0 = bar
    if sector == SECTOR(EARTH, 0):
        theme_sector = sector
        if job == MISSION_3:
            goto(state_25)
        if dialog_cue != MISSION_6:
            goto(state_44)
    if sector == SECTOR(EARTH, 1):
        theme_sector = sector
        if job == MISSION_2:
            if (job_status == NOT_ATTEMPTED) and (stinger_played == 0):
                after_combat = 1
                goto(state_4)
            if hostiles != 0:
                goto(state_28)
            if job_status == SUCCESS:
                bar = 1
                goto(state_9)
            goto(state_44)
        if job == MISSION_3:
            goto(state_44)
        if ((dialog_cue == MISSION_1) or (dialog_cue == MISSION_3)) or (dialog_cue == MISSION_5):
            goto(state_44)
    if sector == SECTOR(EARTH, 2):
        theme_sector = sector
        if (job == MISSION_1) and (job_status == NOT_ATTEMPTED):
            goto(state_4)
        if job == MISSION_2:
            if job_status == NOT_ATTEMPTED:
                goto(state_47)
            if job_status == SUCCESS:
                goto(state_12)
        if (job == MISSION_3) and (job_status == NOT_ATTEMPTED):
            goto(state_43)
        if (job == MISSION_5) and (job_status == NOT_ATTEMPTED):
            goto(state_49)
        if (job != MISSION_5) and (job_status == SUCCESS):
            goto(state_12)
        goto(state_44)
    if sector == SECTOR(EARTH, 3):
        theme_sector = sector
        if ((job == MISSION_2) and (stinger_played == 0)) and (job_status != SUCCESS):
            after_combat = 3
            theme = 2
            goto(state_3)
        if dialog_cue != MISSION_6:
            goto(state_44)
    if sector == SECTOR(EARTH, 4):
        theme_sector = sector
        if job == MISSION_3:
            goto(state_42)
        if job == I44:
            goto(state_55)
        if dialog_cue != MISSION_6:
            goto(state_44)
    if sector == SECTOR(EARTH, 5):
        theme_sector = sector
        if job == MISSION_1:
            goto(state_24)
        if job == MISSION_5:
            if stinger_played == 0:
                goto(state_25)
        goto(state_44)
    if sector == SECTOR(EARTH, 6):
        theme_sector = sector
        if dialog_cue != MISSION_6:
            goto(state_44)
    if sector == SECTOR(EARTH, 7):
        theme_sector = sector
        if dialog_cue != MISSION_6:
            goto(state_44)
    if sector == SECTOR(EARTH, 8):
        theme_sector = sector
        if dialog_cue != MISSION_6:
            goto(state_44)
    if sector == SECTOR(NEUTRAL, 0):
        theme_sector = sector
        if (job == BC01) and (job_status == NOT_ATTEMPTED):
            goto(state_49)
        if (job == BC01) and (job_status == PARTIAL_SUCCESS):
            goto(state_9)
        if (job == GC01) and (job_status == PARTIAL_SUCCESS):
            goto(state_9)
        if (job == BC012) and (job_status == NOT_ATTEMPTED):
            goto(state_46)
        if (job == I01) and (job_status == NOT_ATTEMPTED):
            goto(state_49)
        if (job == I02) and (job_status == NOT_ATTEMPTED):
            goto(state_47)
        if (job == I03) and (job_status == NOT_ATTEMPTED):
            goto(state_47)
        if (job == I03) and (job_status == PARTIAL_SUCCESS):
            goto(state_12)
        if (job == I03) and (job_status == SUCCESS):
            goto(state_44)
        if (job == I04) and (job_status == NOT_ATTEMPTED):
            goto(state_4)
        if (job == I06) and (job_status == NOT_ATTEMPTED):
            goto(state_44)
        if (job == I06) and (job_status == SUCCESS):
            goto(state_13)
        if (job == B09) and (job_status == NOT_ATTEMPTED):
            goto(state_4)
        if (job == B09) and (job_status == SUCCESS):
            goto(state_37)
        if (job == I30) and (job_status == NOT_ATTEMPTED):
            goto(state_43)
        if job_status == SUCCESS:
            goto(state_12)
        if job_status == FAILED:
            goto(state_56)
        goto(state_44)
    if sector == SECTOR(NEUTRAL, 1):
        if (job == GC02) and (job_status == NOT_ATTEMPTED):
            goto(state_19)
        if (job == GC02) and (hostiles != 0):
            goto(state_47)
        theme_sector = sector
    if sector == SECTOR(NEUTRAL, 2):
        if (job == GC02) and (job_status == SUCCESS):
            goto(state_12)
        if job == GC02:
            goto(state_51)
        theme_sector = sector
    if sector == SECTOR(NEUTRAL, 3):
        theme_sector = sector
        if job == I03:
            goto(state_49)
        if (job == I06) and (job_status == NOT_ATTEMPTED):
            goto(state_56)
        if (job == I06) and (job_status == SUCCESS):
            goto(state_52)
        if (job == B09) and (job_status == NOT_ATTEMPTED):
            goto(state_33)
        if (job == B10) and (job_status == NOT_ATTEMPTED):
            goto(state_47)
        if (job == BC012) and (story_cue == CUE(1, BC012)):
            goto(state_24)
        if job == BC012:
            goto(state_44)
        if job == B10:
            goto(state_47)
    if sector == SECTOR(NEUTRAL, 4):
        theme_sector = sector
        if job == I01:
            goto(state_52)
        if (job == I02) and (job_status == NOT_ATTEMPTED):
            set_volume(200)
            goto(state_21)
        if (job == BC012) and (job_status == NOT_ATTEMPTED):
            goto(state_21)
        if (job == I02) and (job_status == FAILED):
            goto(state_21)
        if (job == I04) and (job_status == NOT_ATTEMPTED):
            goto(state_21)
        if (job == I30) and (job_status == NOT_ATTEMPTED):
            goto(state_21)
        if (job == I30) and (job_status == (2 or 3)):
            goto(state_52)
        goto(state_52)
    if sector == SECTOR(NEUTRAL, 5):
        theme_sector = sector
        if (job == I01) and (job_status == NOT_ATTEMPTED):
            goto(state_47)
        if (job == I01) and (job_status == FAILED):
            goto(state_56)
        if (job == I01) and (job_status == SUCCESS):
            goto(state_9)
        if (job == I02) and (job_status == NOT_ATTEMPTED):
            goto(state_5)
        if (job == I02) and (job_status == SUCCESS):
            goto(state_4)
        if (job == I02) and (job_status == FAILED):
            goto(state_56)
        if job == I04:
            goto(state_47)
        if job == I30:
            goto(state_49)
        if job == BC01:
            goto(state_24)
        if job == B10:
            goto(state_28)
        if (job == BC012) and (story_cue == CUE(2, BC012)):
            goto(state_9)
        if (job == GC01) and (job_status == NOT_ATTEMPTED):
            goto(state_47)
        if (job == GC01) and (job_status != NOT_ATTEMPTED):
            goto(state_52)
    if sector == SECTOR(NEUTRAL, 6):
        theme_sector = sector
        if (job == BC01) or (job == GC01):
            after_combat = 5
            goto(state_4)
        if job == I01:
            bar = 8
            goto(state_47)
        if job == I02:
            goto(state_44)
    if sector == SECTOR(NEUTRAL, 7):
        theme_sector = sector
        if (job == I03) and (hostiles != 0):
            goto(state_53)
        if (job == I03) and (hostiles == 0):
            goto(state_52)
        if (job == I06) and (job_status == SUCCESS):
            goto(state_12)
    if sector == SECTOR(NEUTRAL, 8):
        theme_sector = sector
        goto(state_55)
    if sector == SECTOR(GALSPAN, 0):
        theme_sector = sector
        if (job == G08) and (job_status == SUCCESS):
            goto(state_9)
        if (job == G08) and (job_status == FAILED):
            goto(state_52)
        if (job == G16) and (job_status == NOT_ATTEMPTED):
            if hostiles == 0:
                goto(state_24)
            if hostiles != 0:
                goto(state_32)
        if (job == G16) and (job_status == SUCCESS):
            goto(state_9)
        if (job == G16) and (job_status == PARTIAL_SUCCESS):
            goto(state_52)
        if (job == G17) and (job_status == NOT_ATTEMPTED):
            goto(state_47)
        if (job == G17) and (job_status == SUCCESS):
            goto(state_52)
        if (job == G22) and (job_status == NOT_ATTEMPTED):
            set_volume(170)
            goto(state_41)
        if job == G23:
            goto(state_44)
        if (job == G22) and (job_status == SUCCESS):
            goto(state_12)
        if (job == G22) and (job_status == FAILED):
            goto(state_24)
        goto(state_4)
    if sector == SECTOR(GALSPAN, 1):
        theme_sector = sector
        if (job == GC041) and (job_status == NOT_ATTEMPTED):
            goto(state_46)
        if (job == GC041) and (job_status == SUCCESS):
            goto(state_52)
        if job == G22:
            goto(state_52)
        if job == G23:
            goto(state_52)
        goto(state_52)
    if sector == SECTOR(GALSPAN, 2):
        theme_sector = sector
        if job == GC041:
            goto(state_56)
    if sector == SECTOR(GALSPAN, 3):
        theme_sector = sector
        if job == G16:
            goto(state_41)
        if (job == G16) and (story_cue == CUE(1, G16)):
            goto(state_34)
    if sector == SECTOR(GALSPAN, 4):
        theme_sector = sector
        if (job == G07) and (job_status == NOT_ATTEMPTED):
            goto(state_49)
        if (job == G07) and (job_status == SUCCESS):
            goto(state_13)
        if (job == G08) and (job_status == NOT_ATTEMPTED):
            goto(state_15)
        if (job == G08) and (job_status == SUCCESS):
            goto(state_13)
        if job == G17:
            goto(state_51)
    if sector == SECTOR(GALSPAN, 5):
        theme_sector = sector
        if job == G07:
            goto(state_29)
        if (job == G08) and (hostiles != 0):
            goto(state_31)
    if sector == SECTOR(BORA, 0):
        theme_sector = sector
        if (job == BC011) and (job_status == NOT_ATTEMPTED):
            goto(state_40)
        if (job == BC04) and (job_status == NOT_ATTEMPTED):
            goto(state_40)
        if (job == BC06) and (job_status == NOT_ATTEMPTED):
            goto(state_47)
        if (job == B05) and (job_status == NOT_ATTEMPTED):
            goto(state_47)
        if (job == B05) and (job_status == SUCCESS):
            goto(state_12)
        if (job == B31) and (job_status == NOT_ATTEMPTED):
            goto(state_51)
        if (job == B31) and (job_status == SUCCESS):
            goto(state_37)
        if (job == B24) and (job_status == NOT_ATTEMPTED):
            goto(state_42)
        if (job == B18) and (job_status == NOT_ATTEMPTED):
            goto(state_19)
        if (job == B18) and (job_status == SUCCESS):
            goto(state_43)
        goto(state_44)
    if sector == SECTOR(BORA, 1):
        theme_sector = sector
        if job == B18:
            goto(state_52)
        if (job == BC04) and (job_status == NOT_ATTEMPTED):
            goto(state_52)
        if (job == BC04) and (job_status == SUCCESS):
            goto(state_9)
        if (job == BC04) and (job_status == FAILED):
            goto(state_56)
        if job == BC06:
            goto(state_42)
        if job == B31:
            theme = 2
            goto(state_3)
    if sector == SECTOR(BORA, 2):
        theme_sector = sector
        if (job == BC04) and (stinger_played == 0):
            after_combat = 1
            goto(state_4)
        if job == B18:
            goto(state_12)
    if sector == SECTOR(BORA, 3):
        theme_sector = sector
        if job == BC06:
            goto(state_14)
    if sector == SECTOR(BORA, 4):
        theme_sector = sector
        if job == B05:
            goto(state_44)
        if job == BC06:
            goto(state_15)
    if sector == SECTOR(BORA, 5):
        theme_sector = sector
        if job == BC011:
            goto(state_24)
    if sector == SECTOR(BORA, 6):
        theme_sector = sector
        if job == BC011:
            goto(state_13)
    if sector == SECTOR(BORA, 7):
        theme_sector = sector
        if job == B24:
            goto(state_28)
    if sector == SECTOR(FRONTIER, 0):
        theme_sector = sector
        if (job == GC03) and (job_status == NOT_ATTEMPTED):
            goto(state_46)
        if (job == GC03) and (job_status == SUCCESS):
            goto(state_13)
        if (job == BC05) and (job_status == NOT_ATTEMPTED):
            goto(state_56)
        if (job == I11) and (hostiles == 0):
            goto(state_13)
        if job == I14:
            goto(state_52)
        if (job == B13) and (job_status == NOT_ATTEMPTED):
            goto(state_19)
        if (job == BC03) and (job_status == NOT_ATTEMPTED):
            goto(state_40)
        if (job == BC03) and (job_status == SUCCESS):
            goto(state_42)
        if (job == BC05) and (job_status == NOT_ATTEMPTED):
            goto(state_24)
        if (job == I27) and (job_status == SUCCESS):
            goto(state_12)
        if (job == GC04) and (job_status == NOT_ATTEMPTED):
            goto(state_41)
        if (job == G26) and (job_status == NOT_ATTEMPTED):
            goto(state_47)
        if (job == G26) and (job_status == SUCCESS):
            goto(state_12)
        goto(state_44)
    if sector == SECTOR(FRONTIER, 1):
        theme_sector = sector
        if (job == GC03) and (job_status == NOT_ATTEMPTED):
            goto(state_13)
    if sector == SECTOR(FRONTIER, 2):
        theme_sector = sector
        if (job == GC03) and (job_status == NOT_ATTEMPTED):
            set_volume(160)
            goto(state_15)
    if sector == SECTOR(FRONTIER, 3):
        theme_sector = sector
        if (job == B13) and (job_status == NOT_ATTEMPTED):
            goto(state_49)
        if (job == B13) and (job_status == SUCCESS):
            goto(state_33)
        if (job == I14) and (job_status == NOT_ATTEMPTED):
            goto(state_44)
        if (job == I14) and (job_status == SUCCESS):
            goto(state_30)
        if (job == GC04) and (job_status == NOT_ATTEMPTED):
            goto(state_28)
        if (job == GC04) and (job_status == SUCCESS):
            goto(state_12)
        if job == GC03:
            goto(state_33)
    if sector == SECTOR(FRONTIER, 4):
        theme_sector = sector
        if job == BC04:
            goto(state_5)
        if job == B13:
            goto(state_13)
        if job == I14:
            goto(state_46)
    if sector == SECTOR(FRONTIER, 5):
        theme_sector = sector
        if job == BC03:
            goto(state_28)
        if job == GC03:
            set_volume(160)
            goto(state_34)
    if sector == SECTOR(FRONTIER, 6):
        theme_sector = sector
        if job == GC051:
            goto(state_4)
        if job == BC02:
            goto(state_24)
    if sector == SECTOR(FRONTIER, 7):
        theme_sector = sector
        if job == I15:
            goto(state_19)
        if (job == I27) and (story_cue == CUE(1, I27)):
            goto(state_19)
        if job == BC05:
            goto(state_52)
        if job == GC03:
            goto(state_16)
        if (job == I12) and (job_status == SUCCESS):
            goto(state_9)
        if (job == I12) and (job_status == NOT_ATTEMPTED):
            goto(state_19)
    if sector == SECTOR(FRONTIER, 8):
        theme_sector = sector
        if job == I12:
            goto(state_47)
        if job == I15:
            goto(state_49)
    if sector == SECTOR(FRONTIER, 9):
        theme_sector = sector
        if job == BC05:
            goto(state_9)
        if job == GC03:
            goto(state_28)
    if sector == SECTOR(FRONTIER, 10):
        theme_sector = sector
        if (job == GC051) and (story_cue == CUE(1, GC051)):
            goto(state_16)
        if (job == I28) and (job_status == NOT_ATTEMPTED):
            goto(state_31)
        if (job == BC02) and (job_status == NOT_ATTEMPTED):
            goto(state_15)
        if (job == BC02) and (job_status == SUCCESS):
            goto(state_9)
        if (job == G26) and (job_status == NOT_ATTEMPTED):
            goto(state_24)
        if (job == G26) and (job_status == SUCCESS):
            goto(state_41)
    if sector == SECTOR(FRONTIER, 11):
        theme_sector = sector
        if (job == GC051) and (job_status == NOT_ATTEMPTED):
            goto(state_13)
        if (job == GC051) and (job_status == SUCCESS):
            goto(state_28)
        if job == I28:
            goto(state_5)
        if job == GC03:
            goto(state_4)
        if (job == BC02) and (job_status == NOT_ATTEMPTED):
            goto(state_56)
        if (job == BC02) and (job_status == SUCCESS):
            goto(state_34)
        if job == G26:
            goto(state_4)
    if sector == SECTOR(MYSTERY, 0):
        theme_sector = sector
        goto(state_44)
    if sector == SECTOR(MYSTERY, 1):
        theme_sector = sector
        if job == GC06:
            goto(state_24)
        if (job == I25) and (job_status == NOT_ATTEMPTED):
            bar = 8
            goto(state_47)
        if (job == I25) and ((job_status == SUCCESS) or (job_status == PARTIAL_SUCCESS)):
            goto(state_12)
        if (job == BC07) and (job_status == NOT_ATTEMPTED):
            goto(state_49)
        if job == I29:
            goto(state_49)
    if sector == SECTOR(MYSTERY, 2):
        theme_sector = sector
        if job == GC08:
            goto(state_24)
        if job == I25:
            goto(state_49)
        if job == I29:
            goto(state_33)
        if job == BC07:
            goto(state_24)
    if sector == SECTOR(MYSTERY, 3):
        theme_sector = sector
    if sector == SECTOR(MYSTERY, 4):
        if job == GC06:
            goto(state_33)
        theme_sector = sector
        goto(state_44)
    if sector == SECTOR(MYSTERY, 5):
        theme_sector = sector
        if (job == BC041) and (job_status == NOT_ATTEMPTED):
            goto(state_56)
        if job == GC06:
            goto(state_44)
        if (job == GC08) and (job_status == SUCCESS):
            goto(state_9)
        if (job == I20) and (job_status == NOT_ATTEMPTED):
            goto(state_49)
        if (job == I20) and (job_status != FAILED):
            goto(state_12)
        if (job == I25) and (job_status == NOT_ATTEMPTED):
            goto(state_47)
        goto(state_52)
    if sector == SECTOR(MYSTERY, 6):
        theme_sector = sector
        if (job == BC041) and (job_status == NOT_ATTEMPTED):
            goto(state_28)
        if (job == BC041) and (job_status == SUCCESS):
            goto(state_44)
        if (job == BC07) and ((stinger_played == 0) or (hostiles != 0)):
            goto(state_28)
        if (job == GC08) and (hostiles != 0):
            goto(state_53)
        if (job == I20) and (job_status == NOT_ATTEMPTED):
            goto(state_47)
        if (job == I20) and (job_status != NOT_ATTEMPTED):
            goto(state_33)
    if sector == SECTOR(MYSTERY, 7):
        theme_sector = sector
        if job == BC041:
            goto(state_31)
        if (job == I20) and (hostiles != 0):
            goto(state_53)
    if sector == SECTOR(GDISPUTE, 0):
        theme_sector = sector
        if (job == BC08) and (job_status == NOT_ATTEMPTED):
            goto(state_43)
        if (job == BC09) and (job_status == NOT_ATTEMPTED):
            goto(state_40)
        if (job == BC09) and (job_status == SUCCESS):
            goto(state_13)
        if job == BC10:
            play('BC10mus')  # then wait for it to end
            goto(state_19)
        if job == GC10:
            goto(state_5)
        goto(state_44)
    if sector == SECTOR(GDISPUTE, 1):
        theme_sector = sector
        if job == G32:
            goto(state_38)
        if (job == BC08) and (job_status == SUCCESS):
            goto(state_13)
        if job == BC09:
            goto(state_56)
        if job == BC10:
            goto(state_47)
        if job == GC10:
            goto(state_35)
    if sector == SECTOR(GDISPUTE, 2):
        theme_sector = sector
        if job == GC05:
            goto(state_46)
        if (job == GC07) and (job_status == NOT_ATTEMPTED):
            goto(state_47)
        if (job == GC07) and (job_status == SUCCESS):
            goto(state_53)
        if (job == BC08) and (job_status == NOT_ATTEMPTED):
            goto(state_42)
        if job == BC10:
            goto(state_35)
        if (job == G32) and (job_status == NOT_ATTEMPTED):
            goto(state_47)
        if (job == G32) and (job_status == SUCCESS):
            goto(state_12)
        if job == GC10:
            goto(state_4)
    if sector == SECTOR(GDISPUTE, 3):
        theme_sector = sector
        if (job == G32) and (job_status == NOT_ATTEMPTED):
            goto(state_49)
        if (job == GC05) and (hostiles != 0):
            goto(state_28)
        if job == GC10:
            goto(state_14)
        if hostiles == 0:
            goto(state_52)
    if sector == SECTOR(GDISPUTE, 4):
        theme_sector = sector
    if sector == SECTOR(GDISPUTE, 5):
        theme_sector = sector
        if job == GC07:
            goto(state_33)
    if sector == SECTOR(GDISPUTE, 6):
        theme_sector = sector
        if job == BC10:
            goto(state_4)
        if job == GC10:
            goto(state_4)
    if sector == SECTOR(GDISPUTE, 7):
        theme_sector = sector
        if job == GC10:
            goto(state_43)
        if (job == GC07) and (job_status == SUCCESS):
            goto(state_9)
        if (job == G32) and (job_status == NOT_ATTEMPTED):
            goto(state_24)
        if job == GC05:
            goto(state_44)
        if (job == G32) and (job_status == SUCCESS):
            goto(state_9)
        goto(state_4)
    if sector == SECTOR(BDISPUTE, 0):
        theme_sector = sector
        if (job == BC08) and (job_status == NOT_ATTEMPTED):
            goto(state_43)
        if (job == BC09) and (job_status == NOT_ATTEMPTED):
            goto(state_40)
        if (job == BC09) and (job_status == SUCCESS):
            goto(state_13)
        if job == BC10:
            play('BC10mus')  # then wait for it to end
            goto(state_19)
        if job == GC10:
            goto(state_5)
        goto(state_44)
    if sector == SECTOR(BDISPUTE, 1):
        theme_sector = sector
        if job == G32:
            goto(state_38)
        if (job == BC08) and (job_status == SUCCESS):
            goto(state_13)
        if job == BC09:
            goto(state_56)
        if job == BC10:
            goto(state_47)
        if job == GC10:
            goto(state_35)
    if sector == SECTOR(BDISPUTE, 2):
        theme_sector = sector
        if job == GC05:
            goto(state_46)
        if (job == GC07) and (job_status == NOT_ATTEMPTED):
            goto(state_47)
        if (job == GC07) and (job_status == SUCCESS):
            goto(state_53)
        if (job == BC08) and (job_status == NOT_ATTEMPTED):
            goto(state_42)
        if job == BC10:
            goto(state_35)
        if (job == G32) and (job_status == NOT_ATTEMPTED):
            goto(state_47)
        if (job == G32) and (job_status == SUCCESS):
            goto(state_12)
        if job == GC10:
            goto(state_49)
    if sector == SECTOR(BDISPUTE, 3):
        theme_sector = sector
        if (job == G32) and (job_status == NOT_ATTEMPTED):
            goto(state_49)
        if (job == GC05) and (hostiles != 0):
            goto(state_28)
        if job == GC10:
            goto(state_14)
        goto(state_52)
    if sector == SECTOR(BDISPUTE, 4):
        theme_sector = sector
    if sector == SECTOR(BDISPUTE, 5):
        theme_sector = sector
        if job == GC07:
            goto(state_33)
    if sector == SECTOR(BDISPUTE, 8):
        theme_sector = sector
        if job == BC10:
            goto(state_4)
        if job == GC10:
            goto(state_4)
    if 8008 == 2:
        theme_sector = sector
        if job == BC10:
            goto(state_4)
        if job == GC10:
            goto(state_4)
    if sector == SECTOR(BDISPUTE, 7):
        theme_sector = sector
        if job == GC10:
            goto(state_43)
        if (job == GC07) and (job_status == SUCCESS):
            goto(state_9)
        if (job == G32) and (job_status == NOT_ATTEMPTED):
            goto(state_24)
        if job == GC05:
            goto(state_44)
        if (job == G32) and (job_status == SUCCESS):
            goto(state_9)
        goto(state_4)
    if hostiles != 0:
        goto(state_53)
    bar = local0
    goto(state_44)

def state_56():
    if (job == BC09) and (hostiles != 0):
        goto(state_51)
    if (job == I06) and (sector == SECTOR(NEUTRAL, 3)):
        if hostiles != 0:
            goto(state_28)
    if (job == I15) and (story_cue == CUE(2, I15)):
        goto(state_19)
    if (job == GC041) and (sector == SECTOR(GALSPAN, 2)):
        if hostiles != 0:
            bar = 0
            goto(state_5)
    if (job == BC02) and (story_cue == CUE(1, BC02)):
        goto(state_29)
    if ((theme_sector != sector) or (story_cue != 0)) or (sector == SECTOR(EARTH, 0)):
        stinger_played = 0
        goto(state_1)
    wait()  # until the current segment ends
    goto(state_56)

def state_20():
    theme = 0
    theme_sector = sector
    stinger_played = 0
    bar = 0
    peak_hostiles = 0
    after_combat = 0
    set_volume(255)
    goto(state_1)

def state_44():
    set_volume(255)
    match bar:
        case 0: play('wharmp1')
        case 1: play('wharmp2')
        case 2: play('wharmp3')
    if bar > 2:
        bar = 0
    if sector != theme_sector:
        goto(state_20)
    bar = (bar + 1)
    goto(state_45)

def state_45():
    local0 = bar
    bar = 0
    if (job == B05) and (hostiles != 0):
        goto(state_4)
    if (job == I29) and (hostiles != 0):
        goto(state_32)
    if (job == B09) and (story_cue == CUE(2, B09)):
        goto(state_4)
    if (job == B24) and (sector == SECTOR(BORA, 7)):
        if job_status == SUCCESS:
            goto(state_37)
    bar = local0
    if (job == B09) and (story_cue == CUE(1, B09)):
        goto(state_44)
    if (job == BC011) and (sector == SECTOR(BORA, 5)):
        goto(state_44)
    goto(state_1)

def state_55():
    local0 = rand(0, 3)
    match local0:
        case 0: goto(state_28)
        case 1: goto(state_29)
        case 2: goto(state_31)
        case 3: goto(state_26)
    goto(state_0)  # restart

def state_26():
    set_volume(255)
    if story_cue == (theme_sector + 2):
        play('LTIntro')  # then wait for it to end
        goto(state_28)
    match bar:
        case 0: play('BnDInt')
        case 1: play('BnD01')
        case 2: play('BnD02')
        case 3: play('BnD03')
        case 4: play('BnD04')
    match (bar - 5):
        case 0: play('BnD05')
        case 1: play('BnD06')
        case 2: play('BnD07')
        case 3: play('BnD08')
    match (bar - 9):
        case 0: play('BnD09')
        case 1: play('BnD10')
        case 2: play('BnD11')
        case 3: play('BnD12')
    if bar == 12:
        bar = 0
    bar = (bar + 1)
    goto(state_26)

def state_42():
    set_volume(180)
    play('LTStrngs')  # then wait for it to end
    if job == MISSION_3:
        goto(state_29)
    if job == BC08:
        goto(state_28)
    goto(state_56)

def state_28():
    fade_to(255)
    stinger_played = 1
    theme = 171
    if (job == B24) and (sector == SECTOR(BORA, 7)):
        while hostiles == 0:
            wait()  # until the current segment ends
    play('LTSyn01')  # then wait for it to end
    play('LTSyn02')  # then wait for it to end
    play('LTSyn03')  # then wait for it to end
    play('LTSyn04')  # then wait for it to end
    play('LTSyn05')  # then wait for it to end
    play('LTSyn06')  # then wait for it to end
    play('LTSyn07')  # then wait for it to end
    play('LTSyn08')  # then wait for it to end
    play('LTSyn09')  # then wait for it to end
    play('LTSyn10')  # then wait for it to end
    play('LTSyn11')  # then wait for it to end
    play('LTSyn12')  # then wait for it to end
    if hostiles != 0:
        play('LTSynEnd')  # then wait for it to end
    while hostiles == 0:
        match bar:
            case 0: play('LTSyn01')
            case 1: play('LTSyn02')
            case 2: play('LTSyn03')
            case 3: play('LTSyn04')
            case 4: play('LTSyn05')
            case 5: play('LTSyn06')
        match (bar - 6):
            case 0: play('LTSyn07')
            case 1: play('LTSyn08')
            case 2: play('LTSyn09')
            case 3: play('LTSyn10')
            case 4: play('LTSyn11')
            case 5: play('LTSyn12')
        bar = (bar + 1)
        if bar > 12:
            bar = 0
        if (job == BC03) and (story_cue == CUE(1, BC03)):
            bar = 0
            goto(state_41)
        if (job == BC041) and (sector == SECTOR(MYSTERY, 7)):
            bar = 0
            play('LTSynEnd')  # then wait for it to end
            goto(state_46)
    while hostiles != 0:
        match bar:
            case 0: play('LTSnD01')
            case 1: play('LTSnD02')
            case 2: play('LTSnD03')
            case 3: play('LTSnD04')
            case 4: play('LTSnD05')
            case 5: play('LTSnD06')
        match (bar - 6):
            case 0: play('LTSnD07')
            case 1: play('LTSnD08')
            case 2: play('LTSnD09')
            case 3: play('LTSnD10')
            case 4: play('LTSnD11')
            case 5: play('LTSnD12')
        bar = (bar + 1)
        if bar > 12:
            bar = 0
        if (job == BC03) and (story_cue == CUE(1, BC03)):
            goto(state_41)
        if (slot4 > 3500) and (hostiles != 0):
            goto(state_36)
    bar = 0
    if (job == B24) and (sector == SECTOR(BORA, 7)):
        goto(state_13)
    if (job == BC041) and (sector == SECTOR(MYSTERY, 7)):
        goto(state_46)
    play('LTDStart')  # then wait for it to end
    play('LTDBody')  # then wait for it to end
    play('LTDEnd')  # then wait for it to end
    goto(state_56)

def state_29():
    fade_to(180)
    bar = 0
    theme = 172
    while (hostiles == 0) and (peak_hostiles == 0):
        match bar:
            case 0: play('LTSyn01')
            case 1: play('LTSyn02')
            case 2: play('LTSyn03')
            case 3: play('LTSyn04')
            case 4: play('LTSyn05')
            case 5: play('LTSyn06')
        match (bar - 6):
            case 0: play('LTSyn07')
            case 1: play('LTSyn08')
            case 2: play('LTSyn09')
            case 3: play('LTSyn10')
            case 4: play('LTSyn11')
            case 5: play('LTSyn12')
        bar = (bar + 1)
        if bar > 11:
            bar = 0
    if hostiles != 0:
        play('LTSynEnd')  # then wait for it to end
        bar = 0
        peak_hostiles = hostiles
    while hostiles > 0:
        match bar:
            case 0: play('LTSnD01')
            case 1: play('LTSnD02')
            case 2: play('LTSnD03')
            case 3: play('LTSnD04')
            case 4: play('LTSnD05')
            case 5: play('LTSnD06')
        match (bar - 6):
            case 0: play('LTSnD07')
            case 1: play('LTSnD08')
            case 2: play('LTSnD09')
            case 3: play('LTSnD10')
            case 4: play('LTSnD11')
            case 5: play('LTSnD12')
        bar = (bar + 1)
        if bar > 11:
            bar = 0
        if (slot4 > 3500) and (hostiles != 0):
            goto(state_36)
    if job == MISSION_1:
        play('LTDStart')  # then wait for it to end
        play('LTDBody')  # then wait for it to end
        play('LTDEnd')  # then wait for it to end
        goto(state_52)
    play('LTSnDEnd')  # then wait for it to end
    goto(state_56)

def state_30():
    set_volume(180)
    bar = 0
    theme = 173
    play('LTIntro')  # then wait for it to end
    play('LTSnD01')  # then wait for it to end
    play('LTSnD02')  # then wait for it to end
    while hostiles > 0:
        match bar:
            case 0: play('LTSnD03')
            case 1: play('LTSnD04')
            case 2: play('LTSnD05')
            case 3: play('LTSnD06')
            case 4: play('LTSnD07')
            case 5: play('LTSnD08')
        match (bar - 6):
            case 0: play('LTSnD09')
            case 1: play('LTSnD10')
            case 2: play('LTSnD11')
            case 3: play('LTSnD12')
            case 4: play('LTSnD01')
            case 5: play('LTSnD02')
        match (bar - 12):
            case 0: play('LTBr01')
            case 1: play('LTBr02')
            case 2: play('LTBr03')
            case 3: play('LTBr04')
            case 4: play('LTBr05')
            case 5: play('LTBr06')
        match (bar - 18):
            case 0: play('LTBr07')
            case 1: play('LTBr08')
            case 2: play('LTBr09')
            case 3: play('LTBr10')
            case 4: play('LTBr11')
            case 5: play('LTBr12')
        bar = (bar + 1)
        if bar > 23:
            bar = 0
        if (slot4 > 3500) and (hostiles != 0):
            goto(state_36)
        if (job == BC09) and (shields != OK):
            goto(state_5)
        if (job == BC09) and (story_cue == CUE(1, BC09)):
            goto(state_39)
    play('LTDStart')  # then wait for it to end
    play('LTDBody')  # then wait for it to end
    play('LTDEnd')  # then wait for it to end
    goto(state_52)

def state_31():
    set_volume(180)
    bar = 0
    theme = 174
    play('LTBrND01')  # then wait for it to end
    play('LTBrND02')  # then wait for it to end
    play('LTBrND03')  # then wait for it to end
    play('LTBrND04')  # then wait for it to end
    while hostiles == 0:
        stinger_played = 1
        match bar:
            case 0: play('LTBrND05')
            case 1: play('LTBrND06')
            case 2: play('LTBrND07')
            case 3: play('LTBrND08')
            case 4: play('LTBrND09')
            case 5: play('LTBrND10')
            case 6: play('LTBrND11')
            case 7: play('LTBrND12')
        match (bar - 8):
            case 0: play('LTSyn01')
            case 1: play('LTSyn02')
            case 2: play('LTSyn03')
            case 3: play('LTSyn04')
            case 4: play('LTSyn05')
            case 5: play('LTSyn06')
        match (bar - 14):
            case 0: play('LTSyn07')
            case 1: play('LTSyn08')
            case 2: play('LTSyn09')
            case 3: play('LTSyn10')
            case 4: play('LTSyn11')
            case 5: play('LTSyn12')
        bar = (bar + 1)
        if bar > 13:
            bar = 0
        if (job == BC011) and (sector == SECTOR(BORA, 5)):
            bar = 0
            play('LTSynEnd')  # then wait for it to end
            goto(state_44)
    while hostiles > 0:
        match bar:
            case 0: play('LTSnD01')
            case 1: play('LTSnD02')
            case 2: play('LTSnD03')
            case 3: play('LTSnD04')
            case 4: play('LTSnD05')
            case 5: play('LTSnD06')
        match (bar - 6):
            case 0: play('LTSnD07')
            case 1: play('LTSnD08')
            case 2: play('LTSnD09')
            case 3: play('LTSnD10')
            case 4: play('LTSnD11')
            case 5: play('LTSnD12')
        match (bar - 12):
            case 0: play('LTBr01')
            case 1: play('LTBr02')
            case 2: play('LTBr03')
            case 3: play('LTBr04')
            case 4: play('LTBr05')
            case 5: play('LTBr06')
        match (bar - 18):
            case 0: play('LTBr07')
            case 1: play('LTBr08')
            case 2: play('LTBr09')
            case 3: play('LTBr10')
            case 4: play('LTBr11')
            case 5: play('LTBr12')
        bar = (bar + 1)
        if bar > 23:
            bar = 0
        if (slot4 > 3500) and (hostiles != 0):
            goto(state_36)
    play('LTSnDEnd')  # then wait for it to end
    if job == BC041:
        goto(state_46)
    goto(state_44)

def state_33():
    set_volume(180)
    theme = 176
    while hostiles != 0:
        stinger_played = 1
        if (job == GC07) and (story_cue == CUE(1, GC07)):
            goto(state_4)
        match bar:
            case 0: play('LTSyn01')
            case 1: play('LTSyn02')
            case 2: play('LTSyn03')
            case 3: play('LTSyn04')
            case 4: play('LTSyn05')
            case 5: play('LTSyn06')
        match (bar - 6):
            case 0: play('LTSyn07')
            case 1: play('LTSyn08')
            case 2: play('LTSyn09')
            case 3: play('LTSyn10')
            case 4: play('LTSyn11')
            case 5: play('LTSyn12')
        bar = (bar + 1)
        if bar > 12:
            stinger_played = 1
            bar = 0
        if (job == B09) and (story_cue == CUE(1, B09)):
            play('LTSynEnd')  # then wait for it to end
            bar = 0
            goto(state_44)
        if (job == GC06) and (story_cue == CUE(1, GC06)):
            goto(state_32)
        if (hostiles == 0) and (stinger_played == 1):
            bar = 0
            goto(state_52)
        goto(state_33)
    if stinger_played == 1:
        play('LTSynEnd')  # then wait for it to end
    goto(state_52)

def state_53():
    if peak_hostiles != 0:
        fade_to(175)
    else:
        set_volume(175)
    bar = 0
    theme = 25
    if (stinger_played == 0) and (hostiles == 0):
        play('LTSyn01')  # then wait for it to end
        play('LTSyn02')  # then wait for it to end
        while hostiles == 0:
            match bar:
                case 0: play('LTSyn03')
                case 1: play('LTSyn04')
                case 2: play('LTSyn05')
                case 3: play('LTSyn06')
                case 4: play('LTSyn07')
            match (bar - 5):
                case 0: play('LTSyn08')
                case 1: play('LTSyn09')
                case 2: play('LTSyn10')
                case 3: play('LTSyn11')
                case 4: play('LTSyn12')
                case 5: play('LTSyn01')
                case 6: play('LTSyn02')
            bar = (bar + 1)
            if bar > 11:
                bar = 0
    stinger_played = 1
    bar = 0
    while (hostiles > 0) or (job == GC08):
        match bar:
            case 0: play('LTSnD01')
            case 1: play('LTSnD02')
            case 2: play('LTSnD03')
            case 3: play('LTSnD04')
            case 4: play('LTSnD05')
            case 5: play('LTSnD06')
        match (bar - 6):
            case 0: play('LTSnD07')
            case 1: play('LTSnD08')
            case 2: play('LTSnD09')
            case 3: play('LTSnD10')
            case 4: play('LTSnD11')
            case 5: play('LTSnD12')
        match (bar - 12):
            case 0: play('LTBr01')
            case 1: play('LTBr02')
            case 2: play('LTBr03')
            case 3: play('LTBr04')
            case 4: play('LTBr05')
            case 5: play('LTBr06')
        match (bar - 18):
            case 0: play('LTBr07')
            case 1: play('LTBr08')
            case 2: play('LTBr09')
            case 3: play('LTBr10')
            case 4: play('LTBr11')
            case 5: play('LTBr12')
        bar = (bar + 1)
        if bar > 23:
            bar = 0
        if (slot4 > 3500) and (hostiles != 0):
            goto(state_36)
    bar = 0
    goto(state_52)

def state_34():
    fade_to(160)
    theme = 177
    if stinger_played == 1:
        goto(state_44)
    match bar:
        case 0: play('LTBrND01')
        case 1: play('LTBrND02')
        case 2: play('LTBrND03')
        case 3: play('LTBrND04')
        case 4: play('LTBrND05')
        case 5: play('LTBrND06')
    match (bar - 6):
        case 0: play('LTBrND07')
        case 1: play('LTBrND08')
        case 2: play('LTBrND09')
        case 3: play('LTBrND10')
        case 4: play('LTBrND11')
        case 5: play('LTBrND12')
    bar = (bar + 1)
    if bar > 11:
        play('LTSnDEnd')  # then wait for it to end
        if job == G23:
            goto(state_53)
        stinger_played = 1
        bar = 0
        goto(state_44)
    goto(state_34)

def state_32():
    set_volume(180)
    bar = 0
    theme = 175
    play('LTIntro')  # then wait for it to end
    play('LTSnD01')  # then wait for it to end
    play('LTSnD02')  # then wait for it to end
    while hostiles > 0:
        match bar:
            case 0: play('LTSnD03')
            case 1: play('LTSnD04')
            case 2: play('LTSnD05')
            case 3: play('LTSnD06')
            case 4: play('LTSnD07')
            case 5: play('LTSnD08')
        match (bar - 6):
            case 0: play('LTSnD09')
            case 1: play('LTSnD10')
            case 2: play('LTSnD11')
            case 3: play('LTSnD12')
            case 4: play('LTBr01')
            case 5: play('LTBr02')
        match (bar - 12):
            case 0: play('LTBr03')
            case 1: play('LTBr04')
            case 2: play('LTBr05')
            case 3: play('LTBr06')
            case 4: play('LTBr07')
            case 5: play('LTBr08')
        match (bar - 18):
            case 0: play('LTBr09')
            case 1: play('LTBr10')
            case 2: play('LTBr11')
            case 3: play('LTBr12')
            case 4: play('LTSnD01')
            case 5: play('LTSnD02')
        bar = (bar + 1)
        if bar > 23:
            bar = 0
        if (job == I29) and (story_cue == CUE(1, I29)):
            goto(state_51)
        if (job == I30) and (story_cue == CUE(2, I30)):
            goto(state_9)
        if (job == G16) and (story_cue == 2):
            goto(state_9)
        if (slot4 > 3500) and (hostiles != 0):
            goto(state_36)
    if (job == I30) and (job_status == PARTIAL_SUCCESS):
        goto(state_12)
    if job == BC041:
        goto(state_46)
    goto(state_52)

def state_35():
    fade_to(180)
    match bar:
        case 0: play('LTSyn01')
        case 1: play('LTSyn02')
        case 2: play('LTSyn03')
        case 3: play('LTSyn04')
        case 4: play('LTSyn05')
        case 5: play('LTSyn06')
    match (bar - 6):
        case 0: play('LTSyn07')
        case 1: play('LTSyn08')
        case 2: play('LTSyn09')
        case 3: play('LTSyn10')
        case 4: play('LTSyn11')
        case 5: play('LTSyn12')
    match (bar - 12):
        case 0: play('LTSyn01')
        case 1: play('LTSyn02')
        case 2: play('LTSyn03')
        case 3: play('LTSyn04')
        case 4: play('LTSyn05')
        case 5: play('LTSyn06')
    match (bar - 24):
        case 0: play('LTSyn07')
        case 1: play('LTSyn08')
        case 2: play('LTSyn09')
        case 3: play('LTSyn10')
        case 4: play('LTSyn11')
        case 5: play('LTSyn12')
    match (bar - 30):
        case 0: play('LTSnD01')
        case 1: play('LTSnD02')
        case 2: play('LTSnD03')
        case 3: play('LTSnD04')
        case 4: play('LTSnD05')
        case 5: play('LTSnD06')
    match (bar - 36):
        case 0: play('LTSnD07')
        case 1: play('LTSnD08')
        case 2: play('LTSnD09')
        case 3: play('LTSnD10')
        case 4: play('LTSnD11')
        case 5: play('LTSnD12')
    match (bar - 42):
        case 0: play('LTBr01')
        case 1: play('LTBr02')
        case 2: play('LTBr03')
        case 3: play('LTBr04')
        case 4: play('LTBr05')
        case 5: play('LTBr06')
    match (bar - 48):
        case 0: play('LTBr07')
        case 1: play('LTBr08')
        case 2: play('LTBr09')
        case 3: play('LTBr10')
        case 4: play('LTBr11')
        case 5: play('LTBr12')
    bar = (bar + 1)
    if bar > 53:
        bar = 12
    if (job == BC10) and (hostiles == 0):
        goto(state_33)
    goto(state_35)

def state_36():
    fade_to(180)
    match bar:
        case 0: play('LTSyn01')
        case 1: play('LTSyn02')
        case 2: play('LTSyn03')
        case 3: play('LTSyn04')
        case 4: play('LTSyn05')
        case 5: play('LTSyn06')
    match (bar - 6):
        case 0: play('LTSyn07')
        case 1: play('LTSyn08')
        case 2: play('LTSyn09')
        case 3: play('LTSyn10')
        case 4: play('LTSyn11')
        case 5: play('LTSyn12')
    if bar > 11:
        bar = 0
    bar = (bar + 1)
    if (slot4 < 3500) or (hostiles == 0):
        if theme == 171:
            goto(state_28)
        if theme == 172:
            goto(state_29)
        if theme == 173:
            goto(state_30)
        if theme == 174:
            goto(state_31)
        if theme == 25:
            goto(state_53)
        if theme == 175:
            goto(state_32)
    goto(state_36)

def state_24():
    set_volume(170)
    match bar:
        case 0: play('BnDInt')
        case 1: play('BnD01')
        case 2: play('BnD02')
        case 3: play('BnD03')
        case 4: play('BnD04')
    match (bar - 5):
        case 0: play('BnD05')
        case 1: play('BnD06')
        case 2: play('BnD07')
        case 3: play('BnD08')
    match (bar - 9):
        case 0: play('BnD09')
        case 1: play('BnD10')
        case 2: play('BnD11')
        case 3: play('BnD12')
    if bar == 12:
        bar = 0
    goto(state_27)

def state_25():
    set_volume(170)
    match bar:
        case 0: play('BnDInt')
        case 1: play('BnD01')
        case 2: play('BnD02')
        case 3: play('BnD03')
        case 4: play('BnD04')
    match (bar - 5):
        case 0: play('BnD05')
        case 1: play('BnD06')
        case 2: play('BnD07')
        case 3: play('BnD08')
    match (bar - 9):
        case 0: play('BnD09')
        case 1: play('BnD10')
        case 2: play('BnD11')
        case 3: play('BnD12')
        case 4: play('BnDend')
    if bar == 13:
        stinger_played = 1
    bar = (bar + 1)
    if story_cue == (job + 1):
        goto(state_21)
    goto(state_25)

def state_27():
    if (job == BC011) and (hostiles != 0):
        bar = 0
        goto(state_31)
    if (job == G16) and (hostiles != 0):
        bar = 0
        goto(state_32)
    if (job == BC02) and (hostiles == 0):
        goto(state_46)
    if (job == BC012) and (hostiles == 0):
        goto(state_52)
    if (job == MISSION_1) and (story_cue == 7):
        goto(state_29)
    if ((job == I25) and ((job_status == SUCCESS) or (job_status == PARTIAL_SUCCESS))) and (hostiles == 0):
        goto(state_13)
    bar = (bar + 1)
    goto(state_24)

def state_40():
    set_volume(255)
    match bar:
        case 0: play('BorSet01')
        case 1: play('BorSet02')
        case 2: play('BorSet03')
        case 3: play('BorSet04')
        case 4: play('BorSet05')
        case 5: play('BorSet06')
    match (bar - 6):
        case 0: play('BorSet07')
        case 1: play('BorSet08')
        case 2: play('BorSet09')
        case 3: play('BorSet10')
        case 4: play('BorSet11')
    bar = (bar + 1)
    if bar > 10:
        goto(state_56)
    goto(state_40)

def state_37():
    set_volume(255)
    play('BorVic1')  # then wait for it to end
    play('BorVic2')  # then wait for it to end
    play('BorVic3')  # then wait for it to end
    play('BorVic4')  # then wait for it to end
    play('BorVic5')  # then wait for it to end
    play('BorVic6')  # then wait for it to end
    goto(state_56)

def state_38():
    set_volume(255)
    play('BoraCS1')  # then wait for it to end
    play('BoraCS2')  # then wait for it to end
    play('BoraCS3')  # then wait for it to end
    play('BoraCS4')  # then wait for it to end
    play('BoraCS5')  # then wait for it to end
    play('BoraCS6')  # then wait for it to end
    play('BoraCS7')  # then wait for it to end
    play('BoraCS8')  # then wait for it to end
    play('BoraCS9')  # then wait for it to end
    bar = 0
    if job == G32:
        goto(state_51)
    if job == G22:
        goto(state_4)
    goto(state_56)

def state_39():
    set_volume(255)
    play('BoraCV1')  # then wait for it to end
    play('BoraCv2')  # then wait for it to end
    play('BoraCv3')  # then wait for it to end
    play('BoraCv4')  # then wait for it to end
    play('BoraCv5')  # then wait for it to end
    bar = 0
    if job == B05:
        story_cue = 0
        goto(state_51)
    if job == BC09:
        goto(state_7)
    play('BoraCv6')  # then wait for it to end
    goto(state_44)

def state_41():
    set_volume(255)
    if job == B31:
        play('gsinInt')  # then wait for it to end
    play('gsin1')  # then wait for it to end
    play('gsin2')  # then wait for it to end
    play('gsin3')  # then wait for it to end
    play('gsin4')  # then wait for it to end
    play('gsin5')  # then wait for it to end
    play('gsin6')  # then wait for it to end
    play('gsin7')  # then wait for it to end
    play('gsin8')  # then wait for it to end
    bar = 0
    if job == BC03:
        after_combat = 1
        goto(state_7)
    if job == B09:
        stinger_played = 1
        goto(state_7)
    if job == B31:
        goto(state_51)
    if job == BC10:
        story_cue = 0
        goto(state_5)
    if (job == G16) and (hostiles == 0):
        goto(state_52)
    if (job == G16) and (hostiles != 0):
        goto(state_5)
    if job == BC04:
        goto(state_7)
    if job == BC06:
        if story_cue == CUE(1, BC06):
            story_cue = 0
            goto(state_7)
        if story_cue == CUE(2, BC06):
            goto(state_44)
    play('gsintail')  # then wait for it to end
    if job == GC10:
        goto(state_49)
    goto(state_56)

def state_47():
    set_volume(255)
    match bar:
        case 0: play('TB1_1')
        case 1: play('TB1_2')
        case 2: play('TB1_3')
        case 3: play('TB1_4')
        case 4: play('TB1_5')
        case 5: play('TB1_6')
    match (bar - 6):
        case 0: play('TB1_7')
        case 1: play('TB1_8')
        case 2: play('TB1_9')
        case 3: play('TB1_10')
        case 4: play('TB1_11')
        case 5: play('TB1_12')
    match (bar - 12):
        case 0: play('TB1_13')
        case 1: play('TB1_14')
        case 2: play('TB1_15')
        case 3: play('TB1_16')
        case 4: play('TB1_17')
        case 5: play('TB1_18')
    match (bar - 18):
        case 0: play('TB1_19')
        case 1: play('TB1_20')
        case 2: play('TB1_21')
        case 3: play('TB1_22')
        case 4: play('TB1_23')
        case 5: play('TB1_24')
        case 6: play('TB1_TURN')
    bar = (bar + 1)
    if bar == 25:
        bar = 0
    goto(state_48)

def state_48():
    local0 = bar
    bar = 0
    if (job == I12) and (story_cue == CUE(1, I12)):
        goto(state_16)
    if (job == I01) and (hostiles != 0):
        goto(state_30)
    if (job == I04) and (story_cue == CUE(1, I04)):
        goto(state_50)
    if (job == I04) and (job_status == SUCCESS):
        goto(state_52)
    if (job == BC10) and (hostiles != 0):
        goto(state_49)
    if (job == GC02) and (hostiles == 0):
        goto(state_52)
    bar = local0
    goto(state_47)

def state_49():
    set_volume(255)
    if (job == I03) and (hostiles != 0):
        after_combat = 1
        goto(state_5)
    if (job == I15) and (story_cue == CUE(1, I15)):
        goto(state_56)
    if (job == I15) and (story_cue == CUE(2, I15)):
        goto(state_19)
    if (job == I25) and (story_cue == CUE(1, I25)):
        stinger_played = 0
        bar = 0
        goto(state_51)
    if (job == I30) and (story_cue == CUE(1, I30)):
        bar = 0
        goto(state_32)
    match bar:
        case 0: play('TB201')
        case 1: play('TB202')
        case 2: play('TB203')
        case 3: play('TB204')
        case 4: play('TB205')
    bar = (bar + 1)
    if bar > 4:
        bar = 1
    goto(state_49)

def state_21():
    set_volume(255)
    match bar:
        case 0: play('SPIntr01')
        case 1: play('SPIntr02')
        case 2: play('SPIntr03')
    if bar == 3:
        if job == I02:
            play('SPInt03b')  # then wait for it to end
            story_cue = 0
            goto(state_56)
        else:
            play('SPIntr04')  # then wait for it to end
    match (bar - 4):
        case 0: play('SPIntr05')
        case 1: play('SPIntr06')
        case 2: play('SPIntr07')
    if bar > 6:
        story_cue = 0
        if job == MISSION_5:
            goto(state_29)
        if job == I30:
            goto(state_44)
        goto(state_56)
    bar = (bar + 1)
    goto(state_21)

def state_22():
    goto(state_0)  # restart

def state_19():
    set_volume(255)
    if theme == 112:
        local1 = 113
    if theme == 113:
        local1 = 112
    local0 = 0
    if (theme == 112) or (theme == 113):
        local0 = 1
    v6 = 10
    match bar:
        case 0: play('tympin')
        case 1: play('tymp01')
        case 2: play('tymp02')
        case 3: play('tymp03')
        case 4: play('tymp04')
    match (bar - 5):
        case 0: play('tymp05')
        case 1: play('tymp06')
        case 2: play('tymp07')
        case 3: play('tymp08')
    if bar > 8:
        if job == I27:
            goto(state_16)
        if job == BC05:
            goto(state_16)
        if local0 == 1:
            theme = 114
            bar = 0
            if local1 == 113:
                goto(state_18)
            if local1 == 112:
                goto(state_17)
        local2 = rand(0, 7)
        match local2:
            case 0: play('tymp01')
            case 1: play('tymp02')
            case 2: play('tymp03')
            case 3: play('tymp04')
        match (local2 - 4):
            case 0: play('tymp05')
            case 1: play('tymp06')
            case 2: play('tymp07')
            case 3: play('tymp08')
    if theme_sector != sector:
        theme = 114
        bar = 0
        goto(state_20)
    bar = (bar + 1)
    if (job == I15) and (sector == SECTOR(FRONTIER, 8)):
        if story_cue == CUE(3, I15):
            bar = 1
            goto(state_17)
    goto(state_19)

def state_23():
    set_volume(255)
    theme = 13
    if (peak_hostiles == 0) and (hostiles > 0):
        peak_hostiles = hostiles
    if (peak_hostiles == 0) and (hostiles == 0):
        goto(state_23)
    match bar:
        case 0: play('tympin')
        case 1: play('tymp01')
        case 2: play('tymp02')
        case 3: play('tymp03')
        case 4: play('tymp04')
    match (bar - 5):
        case 0: play('tymp05')
        case 1: play('tymp06')
        case 2: play('tymp07')
        case 3: play('tymp08')
    if bar > 8:
        local0 = rand(0, 7)
        match local0:
            case 0: play('tymp01')
            case 1: play('tymp02')
            case 2: play('tymp03')
            case 3: play('tymp04')
        match (local0 - 5):
            case 0: play('tymp05')
            case 1: play('tymp06')
            case 2: play('tymp07')
            case 3: play('tymp08')
    if theme_sector != sector:
        bar = 0
        goto(state_20)
    if ((sector == SECTOR(EARTH, 3)) and (peak_hostiles != 0)) and (hostiles == 0):
        peak_hostiles = 0
        bar = 0
        goto(state_9)
    bar = (bar + 1)
    goto(state_23)

def state_16():
    set_volume(255)
    theme = 111
    match bar:
        case 0: play('HajBed1')
        case 1: play('HajBed2')
        case 2: play('HajBed3')
        case 3: play('HajBed4')
        case 4: play('HajBed5')
        case 5: play('HajBed6')
        case 6: play('HajBed7')
        case 7: play('HajBed8')
    match (bar - 8):
        case 0: play('HajBed9')
        case 1: play('HajBed10')
        case 2: play('HajBed11')
        case 3: play('HajBed12')
        case 4: play('HajBed13')
        case 5: play('HajBed14')
        case 6: play('HajBed15')
        case 7: play('HajBed16')
    match (bar - 16):
        case 0: play('HajBed17')
        case 1: play('HajBed18')
        case 2: play('HajBed19')
        case 3: play('HajBed20')
        case 4: play('HajBed21')
        case 5: play('HajBed22')
        case 6: play('HajBed23')
        case 7: play('HajBed24')
    match (bar - 24):
        case 0: play('HajBed25')
    if bar > 24:
        bar = 1
        goto(state_17)
    bar = (bar + 1)
    goto(state_16)

def state_17():
    set_volume(255)
    theme = 112
    match bar:
        case 0: play('Hajod1')
    match (bar - 1):
        case 0: play('Hajod2')
        case 1: play('Hajod3')
        case 2: play('Hajod4')
        case 3: play('Hajod5')
        case 4: play('Hajod6')
        case 5: play('Hajod7')
        case 6: play('Hajod8')
    match (bar - 8):
        case 0: play('Hajod9')
        case 1: play('Hajod10')
        case 2: play('Hajod11')
        case 3: play('Hajod12')
        case 4: play('Hajod13')
        case 5: play('Hajod14')
        case 6: play('Hajod15')
        case 7: play('Hajod16')
    match (bar - 16):
        case 0: play('Hajod17')
        case 1: play('Hajod18')
        case 2: play('Hajod19')
        case 3: play('Hajod20')
        case 4: play('Hajod21')
        case 5: play('Hajod22')
        case 6: play('Hajod23')
        case 7: play('Hajod24')
    match (bar - 24):
        case 0: play('Hajod25')
        case 1: play('Hajod26')
        case 2: play('Hajod27')
        case 3: play('Hajod28')
        case 4: play('Hajod29')
        case 5: play('Hajod30')
        case 6: play('Hajod31')
        case 7: play('Hajod32')
    match (bar - 32):
        case 0: play('Hajod33')
        case 1: play('Hajod34')
        case 2: play('Hajod35')
        case 3: play('Hajod36')
        case 4: play('Hajod37')
    if bar > 35:
        bar = 0
        local0 = rand(0, 1)
        match local0:
            case 0: goto(state_19)
            case 1: goto(state_18)
    bar = (bar + 1)
    goto(state_17)

def state_18():
    set_volume(255)
    if theme == 112:
        local0 = 114
    if theme == 114:
        local0 = 112
    theme = 113
    match bar:
        case 0: play('HajBed1')
        case 1: play('HajBed2')
        case 2: play('HajBed3')
        case 3: play('HajBed4')
        case 4: play('HajBed5')
        case 5: play('HajBed6')
        case 6: play('HajBed7')
        case 7: play('HajBed8')
    match (bar - 8):
        case 0: play('HajBed9')
        case 1: play('HajBed10')
        case 2: play('HajBed11')
        case 3: play('HajBed12')
        case 4: play('HajBed13')
        case 5: play('HajBed14')
        case 6: play('HajBed15')
        case 7: play('HajBed16')
    match (bar - 16):
        case 0: play('HajBed17')
        case 1: play('HajBed18')
        case 2: play('HajBed19')
        case 3: play('HajBed20')
        case 4: play('HajBed21')
        case 5: play('HajBed22')
        case 6: play('HajBed23')
        case 7: play('HajBed24')
    match (bar - 24):
        case 0: play('HajBed25')
        case 1: play('HajBed26')
        case 2: play('HajBed27')
        case 3: play('HajBed28')
        case 4: play('HajBed29')
        case 5: play('HajBed30')
        case 6: play('HajBed31')
        case 7: play('HajBed32')
    match (bar - 32):
        case 0: play('HajBed33')
        case 1: play('HajBed34')
        case 2: play('HajBed35')
        case 3: play('HajBed36')
    if bar > 35:
        bar = 0
        if local0 == 114:
            goto(state_19)
        if local0 == 112:
            bar = 1
            goto(state_17)
    bar = (bar + 1)
    goto(state_18)

def state_2():
    local0 = bar
    bar = 0
    if theme_sector != sector:
        goto(state_20)
    if (hostiles != 0) and (peak_hostiles == 0):
        peak_hostiles = hostiles
        if theme != 7:
            bar = 0
            goto(state_11)
    if peak_hostiles < hostiles:
        peak_hostiles = hostiles
    if after_combat == 0:
        if (((job_status != FAILED) and (theme != 6)) and (peak_hostiles > 6)) and (hostiles < 2):
            goto(state_9)
        if (((job_status != FAILED) and (theme != 8)) and (peak_hostiles > 0)) and (hostiles == 0):
            goto(state_10)
    if (peak_hostiles != 0) and (hostiles == 0):
        match (after_combat - 1):
            case 0: goto(state_13)
            case 1: goto(state_12)
            case 2: goto(state_9)
            case 3: goto(state_10)
        if after_combat == 5:
            bar = 1
            goto(state_4)
    bar = local0
    goto(state_3)

def state_3():
    local0 = bar
    bar = 0
    if (job == GC02) and (job_status == SUCCESS):
        goto(state_12)
    if (job == BC10) and (story_cue == CUE(2, BC10)):
        goto(state_51)
    if (job == BC10) and (story_cue == CUE(1, BC10)):
        goto(state_41)
    if (job == BC09) and (story_cue == CUE(1, BC09)):
        goto(state_39)
    if (job == GC01) and (job_status == SUCCESS):
        goto(state_9)
    if (job == GC10) and (story_cue == CUE(1, GC10)):
        goto(state_41)
    if (job == B05) and (story_cue == CUE(1, B05)):
        goto(state_39)
    if (job == B05) and (hostiles == 0):
        goto(state_37)
    if (job == BC04) and (story_cue == CUE(1, BC04)):
        goto(state_41)
    if (job == BC06) and (story_cue == CUE(1, BC06)):
        goto(state_41)
    if (job == BC06) and (story_cue == CUE(2, BC06)):
        goto(state_41)
    if sector != theme_sector:
        goto(state_20)
    if (job == B24) and (sector == SECTOR(BORA, 7)):
        if (job_status == SUCCESS) or (job_status == PARTIAL_SUCCESS):
            goto(state_37)
    if (job == B09) and (story_cue == CUE(3, B09)):
        if stinger_played == 0:
            goto(state_41)
    if (job == B31) and (hostiles == 0):
        goto(state_15)
    if (job == BC10) and (job_status == SUCCESS):
        goto(state_9)
    if (job == GC051) and (story_cue == CUE(2, GC051)):
        goto(state_18)
    if (job == G16) and (story_cue == CUE(1, G16)):
        goto(state_34)
    if (job == MISSION_2) and (job_status == SUCCESS):
        goto(state_9)
    bar = (local0 + 1)
    if (((slot4 > 3500) and (hostiles != 0)) and (theme != 7)) and (theme != 3):
        goto(state_11)
    match (theme - 1):
        case 0: goto(state_4)
        case 1: goto(state_5)
        case 2: goto(state_6)
        case 3: goto(state_7)
        case 4: goto(state_8)
        case 5: goto(state_9)
        case 6: goto(state_11)
    match (theme - 8):
        case 0: goto(state_10)
        case 1: goto(state_12)
        case 2: goto(state_13)
        case 3: goto(state_19)
    goto(state_0)  # restart

def state_4():
    set_volume(255)
    v6 = 1
    theme = 1
    if bar > 6:
        if hostiles > 0:
            match (bar - 6):
                case 0: play('f1i1e01a')
                case 1: play('f1i1e02')
                case 2: play('f1i1e03')
                case 3: play('f1i1e01b')
                case 4: play('f1i1e02')
                case 5: play('f1i1e03')
        if hostiles == 0:
            bar = 2
        if bar > 11:
            bar = 2
    match bar:
        case 0: play('f1i1a')
        case 1: play('f1i1b')
        case 2: play('f1i1c01')
        case 3: play('f1i1c02')
        case 4: play('f1i1d01')
        case 5: play('f1i1d02')
    match bar:
        case 0: goto(state_2)
        case 1: goto(state_2)
        case 2: goto(state_3)
        case 3: goto(state_2)
        case 4: goto(state_3)
        case 5: goto(state_2)
    match (bar - 6):
        case 0: goto(state_3)
        case 1: goto(state_3)
        case 2: goto(state_2)
        case 3: goto(state_3)
        case 4: goto(state_3)
        case 5: goto(state_2)
    goto(state_0)  # restart

def state_5():
    set_volume(255)
    v6 = 1
    theme = 2
    if bar == 0:
        goto(state_3)
    if bar > 3:
        bar = -1
        theme = 4
        goto(state_3)
    match (bar - 1):
        case 0: play('f1i201')
        case 1: play('f1i202')
        case 2: play('f1i203')
    if shields != OK:
        goto(state_3)
    bar = (bar + 1)
    goto(state_5)

def state_11():
    set_volume(255)
    theme = 7
    if bar > 2:
        if (hostiles != 0) and (slot4 < 3500):
            bar = -1
            theme = 3
            goto(state_3)
    if bar > 5:
        bar = -1
        theme = 3
        goto(state_3)
    match bar:
        case 0: play('f1i1e01a')
        case 1: play('f1i1e02')
        case 2: play('f1i1e03')
        case 3: play('f1i1e01b')
        case 4: play('f1i1e02')
        case 5: play('f1i1e03')
    match bar:
        case 0: goto(state_3)
        case 1: goto(state_3)
        case 2: goto(state_2)
        case 3: goto(state_3)
        case 4: goto(state_3)
        case 5: goto(state_2)
    goto(state_0)  # restart

def state_6():
    set_volume(255)
    if bar > 9:
        if slot4 > 3500:
            bar = -1
            theme = 7
            goto(state_3)
        bar = 0
        theme = 4
        goto(state_3)
    theme = 3
    match bar:
        case 0: play('f1b201')
        case 1: play('f1b202')
        case 2: play('f1b203')
        case 3: play('f1b204')
        case 4: play('f1b205')
    match (bar - 5):
        case 0: play('f1b206')
        case 1: play('f1b207')
        case 2: play('f1b208')
        case 3: play('f1b209')
        case 4: play('f1b210')
    match bar:
        case 0: goto(state_3)
        case 1: goto(state_3)
        case 2: goto(state_3)
        case 3: goto(state_2)
    match (bar - 4):
        case 0: goto(state_3)
        case 1: goto(state_2)
        case 2: goto(state_3)
        case 3: goto(state_2)
        case 4: goto(state_3)
        case 5: goto(state_2)
    goto(state_0)  # restart

def state_7():
    set_volume(255)
    if bar > 9:
        bar = 0
        if hostiles > 4:
            local0 = rand(0, 1)
            match local0:
                case 0: goto(state_6)
                case 1: goto(state_8)
        else:
            goto(state_8)
    theme = 4
    match bar:
        case 0: play('f1b101')
        case 1: play('f1b102')
        case 2: play('f1b103')
        case 3: play('f1b104')
        case 4: play('f1b105')
    match (bar - 5):
        case 0: play('f1b106')
        case 1: play('f1b107')
        case 2: play('f1b108')
        case 3: play('f1b109')
        case 4: play('f1b110')
    match bar:
        case 0: goto(state_3)
        case 1: goto(state_3)
        case 2: goto(state_3)
        case 3: goto(state_2)
    match (bar - 4):
        case 0: goto(state_3)
        case 1: goto(state_2)
        case 2: goto(state_3)
        case 3: goto(state_2)
        case 4: goto(state_3)
        case 5: goto(state_2)
    goto(state_0)  # restart

def state_8():
    set_volume(255)
    if bar > 9:
        bar = 0
        goto(state_6)
    theme = 5
    match bar:
        case 0: play('f1b301')
        case 1: play('f1b302')
        case 2: play('f1b303')
        case 3: play('f1b304')
        case 4: play('f1b305')
    match (bar - 5):
        case 0: play('f1b306')
        case 1: play('f1b307')
        case 2: play('f1b308')
        case 3: play('f1b309')
        case 4: play('f1b310')
    goto(state_2)

def state_9():
    set_volume(255)
    theme = 6
    v6 = 2
    if hostiles == 0:
        peak_hostiles = 0
    match bar:
        case 0: play('FM1HTrns')
        case 1: play('FM1Cda01')
        case 2: play('FM1Cda02')
        case 3: play('FM1Cda03')
        case 4: play('FM1Cda04')
        case 5: play('FM1Cda05')
        case 6: play('FM1Cda06')
    match (bar - 7):
        case 0: play('FM1Cda07')
        case 1: play('FM1Cda08')
        case 2: play('FM1Cda09')
        case 3: play('FM1Cda10')
        case 4: play('FM1Cda11')
        case 5: play('FM1Cda12')
        case 6: play('FM1Cda13')
    match (bar - 14):
        case 0: play('FM1Cda14')
        case 1: play('FM1Cda15')
        case 2: play('FM1Cda16')
    if bar > 17:
        stinger_played = 1
        goto(state_1)
    if sector != theme_sector:
        goto(state_20)
    if job_status == FAILED:
        goto(state_44)
    bar = (bar + 1)
    goto(state_9)

def state_10():
    set_volume(255)
    theme = 8
    if hostiles == 0:
        peak_hostiles = 0
    match bar:
        case 0: play('FM1ELTrn')
        case 1: play('FM1EL01')
        case 2: play('FM1EL02')
        case 3: play('FM1EL03')
        case 4: play('FM1EL04')
        case 5: play('fm1el05')
    match (bar - 6):
        case 0: play('FM1EL06')
        case 1: play('FM1EL07')
        case 2: play('FM1EL08')
        case 3: play('FM1EL09')
        case 4: play('FM1EL10')
        case 5: play('FM1ELend')
    if bar > 10:
        stinger_played = 1
        goto(state_1)
    goto(state_3)

def state_12():
    set_volume(255)
    theme = 9
    if hostiles == 0:
        peak_hostiles = 0
    if job != B18:
        match bar:
            case 0: play('FM1ELTrn')
    match (bar - 1):
        case 0: play('FM1EL01')
        case 1: play('FM1EL02')
        case 2: play('FM1EL03')
        case 3: play('FM1EL04')
        case 4: play('fm1el05')
    match (bar - 6):
        case 0: play('FM1EL06')
        case 1: play('FM1EL07')
        case 2: play('FM1EL08')
        case 3: play('FM1EL09')
        case 4: play('FM1EL10')
    match (bar - 11):
        case 0: play('FM1EL06')
        case 1: play('FM1EL07')
        case 2: play('FM1EL08')
        case 3: play('FM1EL09')
        case 4: play('FM1EL10')
    if (bar == 16) and (job == B18):
        bar = 0
    if bar == 16:
        play('FM1ELend')  # then wait for it to end
    bar = (bar + 1)
    if bar > 16:
        stinger_played = 1
        goto(state_1)
    goto(state_12)

def state_13():
    set_volume(255)
    local0 = 1
    if job == BC011:
        local0 = 0
    if job == B24:
        local0 = 0
    if job == I06:
        local0 = 0
    theme = 10
    if hostiles == 0:
        peak_hostiles = 0
    if local0 == 1:
        match bar:
            case 0: play('FM1mUSin')
    if (local0 == 0) and (bar == 1):
        set_volume(0)
    fade_to(255)
    match (bar - 1):
        case 0: play('FM1mUS01')
        case 1: play('FM1mUS02')
        case 2: play('FM1mUS03')
        case 3: play('FM1mUS04')
    match (bar - 5):
        case 0: play('FM1mUS05')
        case 1: play('FM1mUS06')
        case 2: play('FM1mUS07')
        case 3: play('FM1mUS08')
    match (bar - 9):
        case 0: play('FM1mUS09')
    if bar > 10:
        bar = 0
        stinger_played = 1
        if job == I11:
            goto(state_4)
        goto(state_44)
    goto(state_3)

def state_14():
    set_volume(255)
    match bar:
        case 0: play('ipiano01')
        case 1: play('ipiano02')
        case 2: play('ipiano03')
        case 3: play('ipiano04')
        case 4: play('ipiano05')
        case 5: play('ipiano06')
    match (bar - 6):
        case 0: play('ipiano07')
        case 1: play('ipiano08')
        case 2: play('ipiano09')
        case 3: play('ipiano10')
        case 4: play('ipiano11')
        case 5: play('ipiano12')
    match (bar - 12):
        case 0: play('ipiano13')
        case 1: play('ipiano14')
        case 2: play('ipiano15')
    bar = (bar + 1)
    if bar > 14:
        if (job == BC06) and (sector == SECTOR(BORA, 3)):
            bar = 2
            goto(state_4)
    goto(state_14)

def state_15():
    set_volume(255)
    match bar:
        case 0: play('ipiano01')
        case 1: play('ipiano02')
        case 2: play('ipiano03')
        case 3: play('ipiano04')
        case 4: play('ipiano05')
        case 5: play('ipiano06')
    match (bar - 6):
        case 0: play('ipiano07')
        case 1: play('ipiano08')
        case 2: play('ipiano09')
        case 3: play('ipiano10')
        case 4: play('ipiano11')
        case 5: play('ipiano12')
    match (bar - 12):
        case 0: play('ipiano13')
        case 1: play('ipiano14')
        case 2: play('ipianotl')
    bar = (bar + 1)
    if (job == B31) and (story_cue == CUE(1, B31)):
        goto(state_41)
    if bar == 14:
        if job == BC06:
            goto(state_6)
    wait()  # until the current segment ends
    goto(state_15)

def state_46():
    theme = 20
    if hostiles == 0:
        peak_hostiles = 0
    local0 = 0
    if job == BC041:
        local0 = 1
    if job == GC05:
        local0 = 1
    set_volume(200)
    match bar:
        case 0: play('MQin')
        case 1: play('MQLoop1')
        case 2: play('MQLoop2')
        case 3: play('MQLoop3')
        case 4: play('MQLoop4')
        case 5: play('MQLoop5')
    if local0 == 1:
        match (bar - 6):
            case 0: play('MQTHEM1')
            case 1: play('MQthem2')
            case 2: play('MQthem3')
            case 3: play('MQthem4')
            case 4: play('MQthem5')
            case 5: play('MQthem6')
            case 6: play('MQthem7')
        match (bar - 13):
            case 0: play('MQthem8')
            case 1: play('MQthem9')
            case 2: play('MQthem10')
            case 3: play('MQthem11')
            case 4: play('MQthem12')
            case 5: play('MQthem13')
    if local0 == 0:
        match (bar - 6):
            case 0: play('MQLoop6')
            case 1: play('MQLoop7')
            case 2: play('MQLoop8')
            case 3: play('MQLoop9')
            case 4: play('MQLoop10')
            case 5: play('MQLoop11')
            case 6: play('MQLoop12')
        match (bar - 13):
            case 0: play('MQLoop13')
            case 1: play('MQLoop14')
            case 2: play('MQLoop15')
            case 3: play('MQLoop16')
            case 4: play('MQLoop17')
            case 5: play('MQLoop18')
    match (bar - 19):
        case 0: play('MQLoop19')
        case 1: play('MQLoop20')
        case 2: play('MQLoop21')
        case 3: play('MQLoop22')
        case 4: play('MQLoop23')
    match (bar - 24):
        case 0: play('MQLoop24')
        case 1: play('MQLoop25')
    set_volume(255)
    bar = (bar + 1)
    if bar > 26:
        bar = 1
    if (job == BC041) and (hostiles != 0):
        goto(state_32)
    if (job == BC02) and (hostiles != 0):
        goto(state_24)
    goto(state_46)

def state_50():
    set_volume(175)
    if (job == B18) and (hostiles != 0):
        goto(state_29)
    match bar:
        case 0: play('DrumNT01')
        case 1: play('DrumNT02')
        case 2: play('DrumNT03')
        case 3: play('DrumNT04')
        case 4: play('DrumNT05')
    match (bar - 5):
        case 0: play('DrumNT06')
        case 1: play('DrumNT07')
        case 2: play('DrumNT08')
        case 3: play('DrumNT09')
    bar = (bar + 1)
    if bar == 9:
        bar = 1
    if (job == I04) and (job_status != NOT_ATTEMPTED):
        bar = 0
        goto(state_52)
    goto(state_50)

def state_51():
    if bar == 9:
        stinger_played = 1
    local0 = bar
    bar = 0
    if job == I25:
        if (stinger_played == 1) and (hostiles == 0):
            goto(state_54)
    if (job == B31) and (job_status == SUCCESS):
        goto(state_9)
    if (job == G17) and (story_cue == CUE(1, BC09)):
        goto(state_5)
    if (job == G32) and (job_status == SUCCESS):
        goto(state_41)
    if (job == BC09) and (story_cue == CUE(1, BC09)):
        goto(state_39)
    if (job == GC02) and (job_status == SUCCESS):
        goto(state_12)
    if (job == B05) and (hostiles == 0):
        goto(state_37)
    bar = local0
    set_volume(140)
    match bar:
        case 0: play('DrumNT01')
    match (bar - 1):
        case 0: play('DrumNT02')
        case 1: play('DrumNT03')
        case 2: play('DrumNT04')
        case 3: play('DrumNT05')
    match (bar - 5):
        case 0: play('DrumNT06')
        case 1: play('DrumNT07')
        case 2: play('DrumNT08')
        case 3: play('DrumNT09')
    match (bar - 9):
        case 0: play('Drum02')
        case 1: play('Drum03')
        case 2: play('Drum04')
        case 3: play('Drum05')
    match (bar - 13):
        case 0: play('Drum06')
        case 1: play('Drum07')
        case 2: play('Drum08')
        case 3: play('Drum09')
    match (bar - 17):
        case 0: play('Drum02')
        case 1: play('Drum03')
        case 2: play('Drum04')
        case 3: play('Drum05')
    match (bar - 21):
        case 0: play('Drum06')
        case 1: play('Drum07')
        case 2: play('Drum08')
        case 3: play('Drum09')
    if bar == 24:
        bar = 0
        if job == BC02:
            goto(state_6)
        if job == BC10:
            goto(state_6)
        if job == BC09:
            goto(state_30)
        if job == B05:
            after_combat = 1
            goto(state_6)
        goto(state_29)
    bar = (bar + 1)
    goto(state_51)

def state_43():
    set_volume(255)
    play('JakeSet1')  # then wait for it to end
    play('JakeSet2')  # then wait for it to end
    play('JakeSet3')  # then wait for it to end
    play('JakeSet4')  # then wait for it to end
    bar = 3
    goto(state_4)

def state_54():
    set_volume(237)
    match bar:
        case 0: play('spcstr01')
        case 1: play('spcstr02')
        case 2: play('spcstr03')
        case 3: play('spcstr04')
        case 4: play('spcstr05')
        case 5: play('spcstr06')
    match (bar - 6):
        case 0: play('spcstr07')
        case 1: play('spcstr08')
        case 2: play('spcstr09')
        case 3: play('spcstr10')
        case 4: play('spcstr11')
        case 5: play('spcstr12')
    match (bar - 12):
        case 0: play('spcstr13')
        case 1: play('spcstr14')
        case 2: play('spcstr15')
        case 3: play('spcstr16')
        case 4: play('spcstr17')
        case 5: play('spcstr18')
    match (bar - 18):
        case 0: play('spcstr19')
        case 1: play('spcstr20')
        case 2: play('spcstr21')
        case 3: play('spcstr22')
        case 4: play('spcstr23')
        case 5: play('spcstr24')
    match (bar - 24):
        case 0: play('spcstr25')
        case 1: play('spcstr26')
        case 2: play('spcstr27')
        case 3: play('spcstr28')
    bar = (bar + 1)
    if bar > 27:
        bar = 0
    if (job == I25) and (hostiles != 0):
        bar = 0
        goto(state_24)
    if (job == I25) and ((job_status == SUCCESS) or (job_status == PARTIAL_SUCCESS)):
        goto(state_13)
    goto(state_0)  # restart

def state_52():
    if peak_hostiles != 0:
        fade_to(37)
    else:
        set_volume(37)
    if (job == B18) and (hostiles != 0):
        goto(state_53)
    if (job == I03) and (hostiles != 0):
        goto(state_53)
    match bar:
        case 0: play('spcstr01')
        case 1: play('spcstr02')
        case 2: play('spcstr03')
        case 3: play('spcstr04')
        case 4: play('spcstr05')
        case 5: play('spcstr06')
    match (bar - 6):
        case 0: play('spcstr07')
        case 1: play('spcstr08')
        case 2: play('spcstr09')
        case 3: play('spcstr10')
        case 4: play('spcstr11')
        case 5: play('spcstr12')
    match (bar - 12):
        case 0: play('spcstr13')
        case 1: play('spcstr14')
        case 2: play('spcstr15')
        case 3: play('spcstr16')
        case 4: play('spcstr17')
        case 5: play('spcstr18')
    match (bar - 18):
        case 0: play('spcstr19')
        case 1: play('spcstr20')
        case 2: play('spcstr21')
        case 3: play('spcstr22')
        case 4: play('spcstr23')
        case 5: play('spcstr24')
    match (bar - 24):
        case 0: play('spcstr25')
        case 1: play('spcstr26')
        case 2: play('spcstr27')
        case 3: play('spcstr28')
    bar = (bar + 1)
    if bar > 27:
        bar = 0
    if (theme == 25) and (hostiles != 0):
        goto(state_53)
    if (theme == 176) and (hostiles != 0):
        goto(state_33)
    if (job == G22) and (story_cue == CUE(1, G22)):
        goto(state_38)
    if (job == G23) and (story_cue == CUE(1, G23)):
        goto(state_34)
    if (job == GC07) and (story_cue == CUE(1, GC07)):
        goto(state_4)
    if (job == BC05) and (story_cue == CUE(1, BC05)):
        goto(state_19)
    goto(state_52)
