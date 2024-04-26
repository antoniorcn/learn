package edu.curso.listacompras.db

import android.content.Context
import android.database.sqlite.SQLiteDatabase
import android.database.sqlite.SQLiteOpenHelper
import android.provider.BaseColumns

object ContatoDBContract {

    object ContatoEntry : BaseColumns {
        const val TABLE_NAME = "contato"
        const val COLUMN_NAME_NOME = "nome"
        const val COLUMN_NAME_TELEFONE = "telefone"
    }


    private const val SQL_CREATE_CONTATOS =
        "CREATE TABLE ${ContatoEntry.TABLE_NAME} (" +
                "${BaseColumns._ID} INTEGER PRIMARY KEY," +
                "${ContatoEntry.COLUMN_NAME_NOME} TEXT," +
                "${ContatoEntry.COLUMN_NAME_TELEFONE} TEXT)"

    private const val SQL_DELETE_CONTATOS = "DROP TABLE IF EXISTS ${ContatoEntry.TABLE_NAME}"

    class FeedReaderDbHelper(context: Context) :
        SQLiteOpenHelper(context, DATABASE_NAME, null, DATABASE_VERSION) {
        override fun onCreate(db: SQLiteDatabase) {
            db.execSQL(SQL_CREATE_CONTATOS)
        }

        override fun onUpgrade(db: SQLiteDatabase, oldVersion: Int, newVersion: Int) {
            // This database is only a cache for online data, so its upgrade policy is
            // to simply to discard the data and start over
            db.execSQL(SQL_DELETE_CONTATOS)
            onCreate(db)
        }

        override fun onDowngrade(db: SQLiteDatabase, oldVersion: Int, newVersion: Int) {
            onUpgrade(db, oldVersion, newVersion)
        }

        companion object {
            // If you change the database schema, you must increment the database version.
            const val DATABASE_VERSION = 1
            const val DATABASE_NAME = "agenda.db"
        }
    }
}
