drop table if exists Game;
drop table if exists Console;
drop table if exists Company;
/*
create table Company (
	company_name varchar(255) unique not null,
	primary key (company_name)
);*/

create table Console (
	console_id varchar(4) unique not null,
	console_name varchar(255) unique not null,
	developer varchar(255) not null,
	primary key (console_id)/*,
	foreign key (developer)
	references Company(company_name)*/
);

create table Game (
	game_id varchar(10) primary key,
	name_na varchar(255),
	name_eu varchar(255),
	name_jp varchar(255),
	release_na int,
	release_eu int,
	release_jp int,
	developers varchar(255)[] not null,
	publisher varchar(255) not null,
	console varchar(4) not null,/*
	foreign key (developers)
	references Company(company_name),
	foreign key (publisher)
	references Company(company_name),*/
	foreign key (console)
	references Console(console_id)
);