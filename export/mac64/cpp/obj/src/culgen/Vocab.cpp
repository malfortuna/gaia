#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_culgen_Vocab
#include <culgen/Vocab.h>
#endif
namespace culgen{

Void Vocab_obj::__construct()
{
	return null();
}

//Vocab_obj::~Vocab_obj() { }

Dynamic Vocab_obj::__CreateEmpty() { return  new Vocab_obj; }
hx::ObjectPtr< Vocab_obj > Vocab_obj::__new()
{  hx::ObjectPtr< Vocab_obj > result = new Vocab_obj();
	result->__construct();
	return result;}

Dynamic Vocab_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Vocab_obj > result = new Vocab_obj();
	result->__construct();
	return result;}

Array< ::String > Vocab_obj::words;

::String Vocab_obj::getWord( ){
	HX_STACK_FRAME("culgen.Vocab","getWord",0xbb4c0545,"culgen.Vocab.getWord","culgen/Vocab.hx",7,0x98b0066c)
	HX_STACK_LINE(8)
	if (((::culgen::Vocab_obj::words == null()))){
		HX_STACK_LINE(9)
		Array< ::String > _g = ::culgen::Vocab_obj::words_raw.split(HX_CSTRING(","));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(9)
		::culgen::Vocab_obj::words = _g;
	}
	HX_STACK_LINE(11)
	int _g1 = ::Std_obj::random(::culgen::Vocab_obj::words->length);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(11)
	return ::culgen::Vocab_obj::words->__get(_g1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Vocab_obj,getWord,return )

::String Vocab_obj::words_raw;


Vocab_obj::Vocab_obj()
{
}

Dynamic Vocab_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"words") ) { return words; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getWord") ) { return getWord_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"words_raw") ) { return words_raw; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Vocab_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"words") ) { words=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"words_raw") ) { words_raw=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Vocab_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("words"),
	HX_CSTRING("getWord"),
	HX_CSTRING("words_raw"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Vocab_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Vocab_obj::words,"words");
	HX_MARK_MEMBER_NAME(Vocab_obj::words_raw,"words_raw");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Vocab_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Vocab_obj::words,"words");
	HX_VISIT_MEMBER_NAME(Vocab_obj::words_raw,"words_raw");
};

#endif

Class Vocab_obj::__mClass;

void Vocab_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("culgen.Vocab"), hx::TCanCast< Vocab_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void Vocab_obj::__boot()
{
	words= null();
	words_raw= HX_CSTRING("come, get, give, go, keep, let, make, put, seem, take, be, do, have, say, see, send, may, will, \n\tabout, across, after, against, among, at, before, between, by, down, from, in, off, on, over, through, to, under, up, with, \n\tas, for, of, till, than, \n\ta , the, all, any, every, little, much, no, other, some, such, that, this, I , he, you, who, \n\tand, because, but, or, if, though, while, how, when, where, why, \n\tagain, ever, far, forward, here, near, now, out, still, then, there, together, well, \n\talmost, enough, even, not, only, quite, so, very, tomorrow, yesterday, \n\tnorth, south, east, west, please, yes,\n\taccount, act, addition, adjustment, advertisement, agreement, air, amount, amusement, animal, answer, apparatus, approval, argument, art, attack, attempt, attention, attraction, authority, back, balance, base, behavior, belief, birth, bit, bite, blood, blow, body, brass, bread, breath, brother, building, burn, burst, business, butter, canvas, care, cause, chalk, chance, change, cloth, coal, color, comfort, committee, company, comparison, competition, condition, connection, control, cook, copper, copy, cork, cotton, cough, country, cover, crack, credit, crime, crush, cry ,current, curve, damage, danger, daughter, day, death, debt, decision, degree, design, desire, destruction, detail, development, digestion, direction, discovery, discussion, disease, disgust, distance, distribution, division, doubt, drink, driving, dust, earth, edge, education, effect, end, error, event, example, exchange, existence, expansion, experience, expert, fact, fall, family, father, fear, feeling, fiction, field, fight, fire, flame, flight, flower, fold, food, force, form, friend, front, fruit, glass, gold, government, grain, grass, grip, group, growth, guide, harbor, harmony, hate, hearing, heat, help, history, hole, hope, hour, humor, ice, idea, impulse, increase, industry, ink, insect, instrument, insurance, interest, invention, iron, jelly, join, journey, judge, jump, kick, kiss, knowledge, land, language, laugh, law, lead, learning, leather, letter, level, lift, light, limit, linen, liquid, list, look, loss, love, machine, man, manager, mark, market, mass, meal, measure, meat, meeting, memory, metal, middle, milk, mind, mine, minute, mist, money, month, morning ,mother, motion, mountain, move, music, name, nation, need, news, night, noise, note, number, observation, offer, oil, operation, opinion, order, organization, ornament, owner, page, pain, paint, paper, part, paste, payment, peace, person, place, plant, play, pleasure, point, poison, polish, porter, position, powder, power, price, print, process, produce, profit, property, prose, protest, pull, punishment, purpose, push, quality, question, rain, range, rate, ray, reaction, reading, reason, record, regret, relation, religion, representative, request, respect, rest, reward, rhythm, rice, river, road, roll, room, rub, rule, run, salt, sand, scale, science, sea, seat, secretary, selection, self, sense, servant, sex, shade, shake, shame, shock, side, sign, silk, silver, sister, size, sky, sleep, slip, slope, smash, smell, smile, smoke, sneeze, snow, soap, society, son, song, sort, sound, soup, space, stage, start, statement, steam, steel, step, stitch, stone, stop, story, stretch, structure, substance, sugar, suggestion, summer, support, surprise, swim, system, talk, taste, tax, teaching, tendency, test, theory, thing, thought, thunder, time, tin, top, touch, trade, transport, trick, trouble, turn, twist, unit, use, value, verse, vessel, view, voice, walk, war, wash, waste, water, wave, wax, way, weather, week, weight, wind, wine, winter, woman, wood, wool, word, work, wound, writing , year,\n\tangle, ant, apple, arch, arm, army, baby, bag, ball, band, basin, basket, bath, bed, bee, bell, berry, bird, blade, board, boat, bone, book, boot, bottle, box, boy, brain, brake, branch, brick, bridge, brush, bucket, bulb, button, cake, camera, card, cart, carriage, cat, chain, cheese, chest, chin, church, circle, clock, cloud, coat, collar, comb, cord, cow, cup, curtain, cushion, dog, door, drain, drawer, dress, drop, ear, egg, engine, eye, face, farm, feather, finger, fish, flag, floor, fly, foot, fork, fowl, frame, garden, girl, glove, goat, gun, hair, hammer, hand, hat, head, heart, hook, horn, horse, hospital, house, island, jewel, kettle, key, knee, knife, knot, leaf, leg, library, line, lip, lock, map, match, monkey, moon, mouth, muscle, nail, neck, needle, nerve, net, nose, nut, office, orange, oven, parcel, pen, pencil, picture, pig, pin, pipe, plane, plate, plough/plow, pocket, pot, potato, prison, pump, rail, rat, receipt, ring, rod, roof, root, sail, school, scissors, screw, seed, sheep, shelf, ship, shirt, shoe, skin, skirt, snake, sock, spade, sponge, spoon, spring, square, stamp, star, station, stem, stick, stocking, stomach, store, street, sun, table, tail, thread, throat, thumb, ticket, toe, tongue, tooth, town, train, tray, tree, trousers, umbrella, wall, watch, wheel, whip, whistle, window, wing, wire, worm,\n\table, acid, angry, automatic, beautiful, black, boiling, bright, broken, brown, cheap, chemical, chief, clean, clear, common, complex, conscious, cut, deep, dependent, early, elastic, electric, equal, fat, fertile, first, fixed, flat, free, frequent, full, general, good, great, grey/gray, hanging, happy, hard, healthy, high, hollow, important, kind, like, living, long, male, married, material, medical, military, natural, necessary, new, normal, open, parallel, past, physical, political, poor, possible, present, private, probable, quick, quiet, ready, red, regular, responsible, right, round, same, second, separate, serious, sharp, smooth, sticky, stiff, straight, strong, sudden, sweet, tall, thick, tight, tired, true, violent, waiting, warm, wet, wide, wise, yellow, young,\n\tawake, bad, bent, bitter, blue, certain, cold, complete, cruel, dark, dead, dear, delicate, different, dirty, dry, false, feeble, female, foolish, future, green, ill, last, late, left, loose, loud, low, mixed, narrow, old, opposite, public, rough, sad, safe, secret, short, shut, simple, slow, small, soft, solid, special, strange, thin, white, wrong");
}

} // end namespace culgen
