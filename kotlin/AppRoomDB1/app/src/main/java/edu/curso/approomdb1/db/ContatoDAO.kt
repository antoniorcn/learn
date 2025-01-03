package edu.curso.approomdb1.db

import androidx.lifecycle.LiveData
import androidx.room.Dao
import androidx.room.Delete
import androidx.room.Insert
import androidx.room.Query
import androidx.room.Update

@Dao
interface ContatoDAO {

    @Insert
    suspend fun insert( contato : Contato ) : Long

    @Update
    suspend fun update( contato : Contato ) : Boolean

    @Delete
    suspend fun delete( contato : Contato ) : Boolean

    @Query("SELECT * FROM contatos where id = :id")
    fun pesquisarPorId ( id : Long ) : LiveData<Contato>

    @Query("SELECT * FROM contatos")
    fun pesquisarPorTodos(): LiveData<List<Contato>>


}