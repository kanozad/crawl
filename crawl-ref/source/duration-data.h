
// Status defaults for durations that are handled straight-forwardly.

// A "" for an entry means N/A.

// Examples:

// DUR_FORESTED has "" for the short_text entry, and therefore has no entry on
// the "@:" line.

// DUR_QAZLAL_AC has "" for the light_text entry, and therefore has no status
// light (instead showing the AC bonus by coloring the player's AC blue)

struct duration_def
{
    duration_type dur;
    bool expire;         // whether to do automat expiring transforms
    int    light_colour; // status light base colour
    string light_text;   // for the status lights.
    string short_text;   // for @: line
    string long_text ;   // for @ message
};

static duration_def duration_data[] =
{
    { DUR_AGILITY, false,
      LIGHTBLUE, "Agi", "agile", "You are agile." },
    { DUR_ANTIMAGIC, true,
      RED, "-Mag", "antimagic", "You have trouble accessing your magic." },
    { DUR_BERSERK, true,
      BLUE, "Berserk", "berserking", "You are possessed by a berserker rage." },
    { DUR_BREATH_WEAPON, false,
      YELLOW, "Breath", "short of breath", "You are short of breath." },
    { DUR_BRILLIANCE, false,
      LIGHTBLUE, "Brill", "brilliant", "You are brilliant." },
    { DUR_CONF, false,
      RED, "Conf", "confused", "You are confused." },
    { DUR_CONFUSING_TOUCH, true,
      BLUE, "Touch", "confusing touch", "" },
    { DUR_CONTROL_TELEPORT, true,
      MAGENTA, "cTele", "controlling teleports", "You can control teleportations." },
    { DUR_CORONA, false,
      YELLOW, "Corona", "", "" },
    { DUR_DEATH_CHANNEL, true,
      MAGENTA, "DChan", "death channel", "You are channeling the dead." },
    { DUR_DIVINE_STAMINA, true,
      WHITE, "Vit", "vitalised", "You are divinely vitalised." },
    { DUR_DIVINE_VIGOUR, false,
      0, "", "divinely vigorous", "You are imbued with divine vigour." },
    { DUR_EXHAUSTED, false,
      YELLOW, "Exh", "exhausted", "You are exhausted." },
    { DUR_FIRE_SHIELD, true,
      BLUE, "RoF", "immune to fire clouds", "" },
    { DUR_ICY_ARMOUR, true,
      0, "", "icy armour", "You are protected by a layer of icy armour." },
    { DUR_LIQUID_FLAMES, false,
      RED, "Fire", "liquid flames", "You are covered in liquid flames." },
    { DUR_LOWERED_MR, false,
      RED, "-MR", "vulnerable", "" },
    { DUR_MAGIC_SHIELD, false,
      0, "", "shielded", "" },
    { DUR_MIGHT, false,
      LIGHTBLUE, "Might", "mighty", "You are mighty." },
    { DUR_PARALYSIS, false,
      RED, "Para", "paralysed", "You are paralysed." },
    { DUR_PETRIFIED, false,
      RED, "Stone", "petrified", "You are petrified." },
    { DUR_PETRIFYING, true,
      LIGHTRED, "Petr", "petrifying", "You are turning to stone." },
    { DUR_RESISTANCE, true,
      BLUE, "Resist", "resistant", "You resist elements." },
    { DUR_SLIMIFY, true,
      GREEN, "Slime", "slimy", "" },
    { DUR_SLEEP, false,
      0, "", "sleeping", "You are sleeping." },
    { DUR_STONESKIN, false,
      0, "", "stone skin", "Your skin is tough as stone." },
    { DUR_SWIFTNESS, true,
      BLUE, "Swift", "swift", "You can move swiftly." },
    { DUR_TELEPATHY, false,
      LIGHTBLUE, "Emp", "empathic", "" },
    { DUR_TELEPORT, false,
      LIGHTBLUE, "Tele", "about to teleport", "You are about to teleport." },
    { DUR_DEATHS_DOOR, true,
      LIGHTGREY, "DDoor", "death's door", "" },
    { DUR_PHASE_SHIFT, true,
      0, "", "phasing", "You are out of phase with the material plane." },
    { DUR_QUAD_DAMAGE, true,
      BLUE, "Quad", "quad damage", "" },
    { DUR_SILENCE, true,
      MAGENTA, "Sil", "silence", "You radiate silence." },
    { DUR_STEALTH, false,
      BLUE, "Stealth", "especially stealthy", "" },
    { DUR_AFRAID, true,
      RED, "Fear", "afraid", "You are terrified." },
    { DUR_MIRROR_DAMAGE, false,
      WHITE, "Mirror", "injury mirror", "You mirror injuries." },
    { DUR_SCRYING, false,
      WHITE, "Scry", "scrying",
      "Your astral vision lets you see through walls." },
    { DUR_TORNADO, true,
      LIGHTGREY, "Tornado", "tornado",
      "You are in the eye of a mighty hurricane." },
    { DUR_LIQUEFYING, false,
      LIGHTBLUE, "Liquid", "liquefying",
      "The ground has become liquefied beneath your feet." },
    { DUR_HEROISM, false,
      LIGHTBLUE, "Hero", "heroism", "You possess the skills of a mighty hero." },
    { DUR_FINESSE, false,
      LIGHTBLUE, "Finesse", "finesse", "Your blows are lightning fast." },
    { DUR_LIFESAVING, true,
      LIGHTGREY, "Prot", "protection", "You are calling for your life to be saved." },
    { DUR_DARKNESS, true,
      BLUE, "Dark", "darkness", "You emit darkness." },
    { DUR_SHROUD_OF_GOLUBRIA, true,
      BLUE, "Shroud", "shrouded", "You are protected by a distorting shroud." },
    { DUR_TORNADO_COOLDOWN, false,
      YELLOW, "Tornado", "", "" ,},
    { DUR_DISJUNCTION, true,
      BLUE, "Disjoin", "disjoining", "You are disjoining your surroundings." },
    { DUR_SENTINEL_MARK, true,
      LIGHTRED, "Mark", "marked", "A sentinel's mark is revealing your location to enemies." },
    { DUR_INFUSION, true,
      BLUE, "Infus", "infused", "Your attacks are magically infused."},
    { DUR_SONG_OF_SLAYING, true,
      BLUE, "Slay", "singing", "Your melee attacks are strengthened by your song."},
    { DUR_FLAYED, true,
      RED, "Flay", "flayed", "You are covered in terrible wounds." },
    { DUR_WEAK, false,
      RED, "Weak", "weakened", "Your attacks are enfeebled." },
    { DUR_DIMENSION_ANCHOR, false,
      RED, "-Tele", "cannot translocate", "You are firmly anchored to this plane." },
    { DUR_TOXIC_RADIANCE, false,
      MAGENTA, "Toxic", "radiating poison", "You are radiating toxic energy."},
    { DUR_RECITE, false,
      WHITE, "Recite", "reciting", "You are reciting Zin's Axioms of Law." },
    { DUR_GRASPING_ROOTS, false,
      BROWN, "Roots", "grasped by roots", "Your movement is impeded by grasping roots." },
    { DUR_FIRE_VULN, false,
      RED, "-rF", "fire vulnerable", "You are more vulnerable to fire." },
    { DUR_BARBS, false,
      RED, "Barbs", "manticore barbs", "Manticore spikes are embedded in your body." },
    { DUR_POISON_VULN, false,
      RED, "-rP", "poison vulnerable", "You are more vulnerable to poison." },
    { DUR_FROZEN, false,
      RED, "Frozen", "frozen", "You are partly encased in ice." },
    { DUR_SAP_MAGIC, false,
      RED, "Sap", "sap magic", "Casting spells hinders your spell success." },
    { DUR_PORTAL_PROJECTILE, false,
      LIGHTBLUE, "PProj", "portal projectile", "You are teleporting projectiles to their destination." },
    { DUR_FORESTED, false,
      GREEN, "Forest", "", "" },
    { DUR_DRAGON_CALL, false,
      WHITE, "Dragoncall", "dragon's call", "You are beckoning forth a horde of dragons." },
    { DUR_DRAGON_CALL_COOLDOWN, false,
      YELLOW, "Dragoncall", "", "" },
    { DUR_ABJURATION_AURA, false,
      BLUE, "Abj", "aura of abjuration", "You are abjuring all hostile summons around you." },
    { DUR_NO_POTIONS, false,
      RED, "-Potion", "no potions", "You cannot drink potions." },
    { DUR_QAZLAL_FIRE_RES, false,
      LIGHTBLUE, "rF+", "protected from fire", "Qazlal is protecting you from fire." },
    { DUR_QAZLAL_COLD_RES, false,
      LIGHTBLUE, "rC+", "protected from cold", "Qazlal is protecting you from cold." },
    { DUR_QAZLAL_ELEC_RES, false,
      LIGHTBLUE, "rElec+", "protected from electricity", "Qazlal is protecting you from electricity." },
    { DUR_QAZLAL_AC, false,
      LIGHTBLUE, "", "protected from physical damage", "Qazlal is protecting you from physical damage." },
    { DUR_CORROSION, false,
      RED, "Corr", "corroded equipment", "Your equipment is corroded." },
};
