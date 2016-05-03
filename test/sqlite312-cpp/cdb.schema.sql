-- cdb.schema.sql

drop table if exists lib;
drop table if exists compat;
drop table if exists syms;

create table lib (
	lid integer not null,
	sid integer not null,
	func text not null,
	file text not null,
	line integer not null,
	primary key (lid),
	unique (sid),
	unique (func)
);

create table compat (
	cid integer not null,
	sid integer not null,
	func text not null,
	file text not null,
	line integer not null,
	resolved integer not null default 0,	-- 0 or 1
	primary key (cid),
	unique (sid),
	unique (func)
);

create table syms (
	id integer not null,
	sid integer not null,
	primary key (id),
	unique (sid)
);

